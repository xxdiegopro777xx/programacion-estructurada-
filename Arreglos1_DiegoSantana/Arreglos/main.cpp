#include <iostream>

using namespace std;

int main()
{
    float temp [4];
    float temp1, temp2;
    int dummy;
    temp[0]=20.5;
    temp[1]=19.2;

    printf("Direccion de mem de 2 flotantes: &temp1: %i,!\n", &temp1, &temp2);
    printf("Direccion de temp[24]:%i,\n",&temp);
    printf("Direccion de &temp[24]:%i,\n",&temp[23]);
    printf("Direccion de &dummy[24]:%i,\n",&dummy);
    printf("Temperatura 0: %f\n",temp [0]);
    printf("%f",temp [1]);



    return 0;
}
