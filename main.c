
#include <stdio.h>

void menu()
{
    printf("Selecciona que hacer:\n");
    printf("1) Analizar numero\n");
    printf("2) Calculadora\n");
    printf("3) Salir\n");
}

int calculadora(int op, int op1, int op2)
{
    int resultado = 0;

    if(op == 1)
    {
        resultado = op1 + op2;
    }
    else if(op == 2)
    {
        resultado = op1 - op2;
    }

    return resultado;
}

int main()
{
    int opcionP, opcionC, x, y, r;

    do
    {
        menu();
        scanf("%d", &opcionP);

        switch(opcionP)
        {
        case 1:
            printf("Opcion seleccionada: analizar numero\n");
            printf("Dame un numero entero:\n");
            scanf("%d", &x);

            printf("El numero es: %d\n", x);

            if(x % 2 == 0)
            {
                printf("El numero es PAR\n");
            }
            else
            {
                printf("El numero es IMPAR\n");
            }
            break;

        case 2:
            printf("Opcion seleccionada: calculadora\n");

            printf("Dame el primer numero:\n");
            scanf("%d", &x);

            printf("Dame el segundo numero:\n");
            scanf("%d", &y);

            printf("Que quieres hacer?\n");
            printf("1) Sumar\n");
            printf("2) Restar\n");
            printf("3) Regresar\n");
            scanf("%d", &opcionC);

            if(opcionC == 1 || opcionC == 2)
            {
                r = calculadora(opcionC, x, y);
                printf("El resultado es: %d\n", r);
            }
            else if(opcionC == 3)
            {
                printf("Regresando...\n");
            }
            else
            {
                printf("Opcion invalida\n");
            }

            break;

        case 3:
            printf("Adios mundo\n");
            break;

        default:
            printf("Opcion invalida\n");
        }

    } while(opcionP != 3);

    return 0;
}
