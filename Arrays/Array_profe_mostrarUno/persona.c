#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

// MENU

void Menu()
    {
    system("cls");
    printf("Menu principal\n");
    printf("--------------\n");
    printf("1 - Alta\n");
    printf("2 - Baja\n");
    printf("3 - Muestra en pantalla\n");
    printf("4 - Modificacion\n");
    printf("5 - Salir\n");
    printf("Elija opcion: ");
    }

//ALTA BAJA Y MODIFICACION
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

        printf("Ingrese DNI: \n");
        scanf("%d",&pers[i].DNI);

        pers[i].isEmpty = 0;

        printf("Dia Nacimiento: \n");
        scanf("%d",&pers[i].fechaNac.dia);

        printf("Mes Nacimiento: \n");
        scanf("%d",&pers[i].fechaNac.mes);

        printf("Año Nacimiento: \n");
        scanf("%d",&pers[i].fechaNac.ano);
    }
}

void baja( ePersona pers[], int cantidad )
{
    //Variables a usar
    int a;
    int aux [30];
    system("cls");

    // PEDIMOS EL DNI
    printf("Baja de Persona\n");
    printf("--------------- \n");
    FLUSH;
    aux = getInt("Ingrese DNI de la persona: \n");

    //VALIDAMOS EL DNI A DAR DE BAJA
    while (strlen(aux) != 9);
    {
        printf("DNI INCORRECTO\n");
        printf("----------------\n");
        FLUSH;
        aux = getInt("REINGRESE EL DNI: \n");
    }

    for (a=0;a<cantidad;a++)
    {
        if (strcmp(aux,ePersona[a].DNI == 0))
        {
            strcpy(ePersona[a].isEmpty = 0);
        }
    }

    if (a == cantidad)
    {
        printf("DNI no encontrado");
    }
    else
    {
        printf("Baja de persona Exitosa");
    }




}


//MOSTRAR

void mostrarTodos( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        mostrarUno(pers[i]);
    }

}

void mostrarUno( ePersona per ){
        printf("%s\t%s\t%d\t%d\n", per.apellido, per.nombre, per.edad, per.isEmpty);
}


// ORDENAR

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

// GETS

int getInt(char mensaje[])
{
    int auxiliarInt;
    printf("%s",mensaje);
    scanf("%d", &auxiliarInt);
    return auxiliarInt;
}

float getFloat(char mensaje[])
{
    float auxiliarFloat;
    printf("%s",mensaje);
    scanf("%f", &auxiliarFloat);
    return auxiliarFloat;
}

char getChar(char mensaje[])
{
    char auxiliarChar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c", &auxiliarChar);
    return auxiliarChar;
}
