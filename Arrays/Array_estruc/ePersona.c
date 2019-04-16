#include <stdio.h>
#include <stdlib.h>
#include "ePersona.h"

void alta(ePersona per)
{
    int i=0;
    ePersona per;

    for (i=0;i<3;i++)
    {
        printf("Apellido:\n");
        fflush(stdin);
        scanf("%s", per[i].apellido);

        printf("Nombre:\n");
        fflush(stdin);
        scanf("%s", per[i].nombre);

        printf("Edad:\n");
        scanf("%s", per[i].edad);

        per.isEmpty = 0;

        return per[i];
    }

}

void mostrar(ePersona per){
    printf("%s\t%s\t%d\t%d\n", per.apellido, per.nombre, per.edad, per.isEmpty);
}
