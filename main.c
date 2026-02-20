#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int x;
    int suma =0;
    printf("suma");
    scanf("%d",&x);

    while (x !=0) {
        suma +=x;
        scanf("%d",&x);
    }
*/
/*
int opcion;
do{
    printf("1.continuar\n");
    printf("2.salir\n");
    scanf("%d",&opcion);

} while (opcion !=2);

*/
/*
int n,valor,suma;
 for(int i=1;i<=n;i++){

    suma +=valor;
 }

 */

int main() {

    int opcion;
    int n, promedio = 0, calificacion;

    do {
        printf("1. Ingresar calificaciones\n");
        printf("2. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {

            printf("Cuantas calificaciones se ingresaran: ");
            scanf("%d", &n);

            promedio = 0;

            for (int i = 1; i <= n; i++) {
                printf("Ingrese la calificacion %d: ", i);
                scanf("%d", &calificacion);
                promedio += calificacion;
            }

            promedio = promedio / n;

            printf("El promedio es: %d\n", promedio);
        }

    } while (opcion != 2);

    return 0;
}

