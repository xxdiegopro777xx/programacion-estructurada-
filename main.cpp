#include <iostream>

using namespace std;

int main()
{
    int opcionP. opcionC, x, y;

    printf("selecciona que hacer: \n");
            printf("1) analizar numero: \n");
            printf("2) calculadora: \n");
            printf("3) salir: \n");

    printf("selecciona que hacer: \n");
    scanf("%d", &opcionP);

    switch(opcionP)
    {
    case 1:
        printf("opcion seleccionada: analizar numero \n");
        printf("dame un numero entero \n");
        scanf("%d", &x);

        break;

    case 2:
        printf("opcion seleccionada: analizar numero \n");
         printf("dame un numero entero \n");
        scanf("%d", &x);
        scanf("%d \n %d", &x, &y);
        printf("el primer operando es: %d \n el segundo operando es: %d \n", x, y,);


        break;
    case 3:
        printf("////adios mundo///// \n");

  return 0;

        default:
            printf("////opcion no validada////");
            printf("selecciona que hacer: \n");
            printf("1) analizar numero: \n");
            printf("2) calculadora: \n");
            printf("3) salir: \n");

    }


    return 0;
}
