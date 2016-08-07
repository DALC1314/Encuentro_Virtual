#include<stdio.h>
int main()
{
    int dia;
    dia = 0;
    printf("ingrese un numero de 1 a 7: ");
    scanf("%d", &dia);
    if (dia == 1)
    printf("dia Domingo\n");
    else if (dia == 2)
     printf("dia Lunes\n");
    else if (dia == 3)
     printf("dia Martes\n");
    else if (dia == 4) 
    printf("dia Miercoles\n");
    else if (dia == 5)
    printf("dia Jueves\n");
    else if (dia == 6)
    printf("dia Viernes\n");
    else if (dia == 7)
    printf("dia Sabado\n");
    return 0;
}
