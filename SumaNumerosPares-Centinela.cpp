/* Encuentro Virtual 
Jairo Manso
Diego Latorre
Yovanny Rincon
Luis Carlos Gomez */

#include<stdio.h>
int main()
{
    int x;
    int suma;
    x=0;
    suma=2;
    while (x < 1000)
        {
        x += 2;
        suma += x;
        printf("%d\n",x);
        }
    printf("La suma total de los numeros pares hasta 1000 es: %d",suma);
    printf("\nEncuentro Virtual - Jairo Manso - Diego Latorre - Yovanny Rincon - Luis Carlos Gomez");
    return 0;
}
