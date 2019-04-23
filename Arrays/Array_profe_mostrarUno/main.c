#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#define CANT 3


int main()
{
   int i;
   int opcion;
   ePersona pers [CANT];

   for (i=0; i<CANT,i++)
   {
       strcpy(ePersona[i].isEmpty = 0);
   }
   while (opcion !=5)
   {
       Menu();
       scanf("%d",&opcion);

       switch (opcion)
       {
       case 1 :
        alta(pers, CANT);
        break;

       case 2 :
        baja
       }
   }
}
