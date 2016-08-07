/* Encuentro Virtual 
Jairo Manso
Diego Latorre
Yovanny Rincon
Luis Carlos Gomez */

#include <stdio.h>
int main(){
    int i,sum=2;
    printf("\n\n***********************************************************\n");
    printf("* PROGRAMA QUE IMPRIME LA SUMA DE LOS PARES HASTA 1000 *\n");
    printf("***********************************************************\n\n\n");    
    
        for(i=0;i<=1000;i=i+2){
        printf(" %d\n ",i);
        sum = sum +i;
    }
    printf("La suma total de los numeros pares hasta 1000 es: %d",sum);
    printf("\n Encuentro Virtual - Jairo Manso - Diego Latorre - Yovanny Rincon - Luis Carlos Gomez");
   return 0;
}
