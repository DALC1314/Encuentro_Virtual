/* Encuentro Virtual 
Jairo Manso
Diego Latorre
Yovanny Rincon
Luis Carlos Gomez */

#include <conio.h>
#include <stdio.h>

int main()
{
    int dia;
    printf( "\n   Introduzca dia de la semana: " );
    scanf( "%d", &dia );

    switch ( dia )
    {
         case 1 : printf( "\n   Domingo" );
                  break;
         case 2 : printf( "\n   Lunes" );
                  break;
         case 3 : printf( "\n   Martes" );
                  break;
         case 4 : printf( "\n   Miercoles" );
                  break;
         case 5 : printf( "\n   Jueves" );
                  break;
         case 6 : printf( "\n   Viernes" );
                  break;
         case 7 : printf( "\n   Sabado" );
                  break;
        default : printf( "\n   ERROR: Dijistaste un numero o caracter invalido." );
    }

    getch(); 

    return 0;
}
