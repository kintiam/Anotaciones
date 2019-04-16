#include <stdio.h>
#include <stdlib.h>
#include "ePersona.h"

ePersona alta (ePersona per)
{
    printf("Nombre:");
    fflush(stdin);
    scanf("%s",per.nombre);

    printf("Apellido:");
    fflush(stdin);
    scanf("%s",per.apellido);

    printf("Edad:");
    scanf("%d",&per.edad);

    per.isEmpty = 0;

    system("cls");

    return per;
}

void mostrar (ePersona per)
{
    printf("Sus datos son: %s, %s y tiene %d años",per.apellido, per.nombre, per.edad);

}
