#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

void alta( ePersona pers[], int cantidad )
{
    int i;

    for( i = 0; i < cantidad; i++ ){
        printf("Apellido:\n");
        fflush(stdin);
        scanf("%s", pers[i].apellido);

        printf("Nombre:\n");
        fflush(stdin);
        scanf("%s", pers[i].nombre);

        printf("Edad:\n");
        scanf("%d", &pers[i].edad);

        pers[i].isEmpty = 0;

        printf("Dia Nacimiento: \n");
        scanf("%d",&pers[i].fechaNac.dia);

        printf("Mes Nacimiento: \n");
        scanf("%d",&pers[i].fechaNac.mes);

        printf("Año Nacimiento: \n");
        scanf("%d",&pers[i].fechaNac.ano);
    }
}

void mostrarTodos( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        mostrarUno(pers[i]);
    }

}

void mostrarUno( ePersona per ){
        printf("%s\t%s\t%d\t%d\n", per.apellido, per.nombre, per.edad, per.isEmpty);
}

void ordenar (ePersona pers[], int cantidad)
{
    int i, j;
    ePersona aux;

    for (i=0; i<cantidad - 1; i++)
         {
             for (j=i+1; j<cantidad; j++)
             {
                 if(strcmp(pers[i].apellido, pers[j].apellido)>0)
                 {
                     aux = pers[i];
                     pers[i]=pers[j];
                     pers[j]=aux;
                 }
             }
         }
}
