
#include <iostream>


int main()
{
    int opcionP. opcionC, x, y;
do
{
    printf("selecciona que hacer: \n");
            printf("1) analizar numero: \n");
            printf("2) calculadora: \n");
            printf("3) salir: \n");

    scanf("%d", &opcionP);

    switch(opcionP)
    {
    case 1:
        printf("opcion seleccionada: analizar numero \n");
        printf("dame un numero entero \n");
        scanf("%d", &x);
        printf("el numero %d \n", x);
        if(x%2==0)
        {
            printf("el numero %d rs par \n");
        }


        break;

    case 2:
        printf("opcion seleccionada: calculadora \n");
        printf("dame un numero entero \n");
        scanf("%d", &x);
        scanf("%d \n %d", &x, &y);
        printf("el primer operando es: %d \n el segundo operando es: %d \n", x, y,);
        printf("que quieres hacer \n");
        printf("1) sumar \n");
        printf("2) restar \n");
        printf("3) regresar \n");
        scanf("%d", &opcionP);


        break;
    case 3:
        printf("////adios mundo///// \n");
    {
}


    }


  return 0;

        default:
            printf("////opcion no validada////");
           /* printf("selecciona que hacer: \n");
            printf("1) analizar numero: \n");
            printf("2) calculadora: \n");
            printf("3) salir: \n");*/


