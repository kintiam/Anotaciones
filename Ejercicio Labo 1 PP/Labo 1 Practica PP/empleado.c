#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"

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
