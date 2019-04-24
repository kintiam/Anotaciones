#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

//Estructuras

typedef struct{
    int dia;
    int mes;
    int ano;
}eFecha;

typedef struct{
    int idSector;
    char descripcionSector[15];
}eSector;

eSector sectores [] = {1,"RR.HH",2,"Compras",3,"Ventas",4,"Marketing",5,"Operario",6,"Administrativo};

typedef struct{
    int legajo;
    int legajoEmpty;
    char apellido;
    char nombre;
    char sexo;
    float salario;
    eFecha fIngreso;
    eSector sectores;
}eEmpleado;

typedef struct{
        int codigoMenu;
        char descripcionMenu [51];
        float precio;
}eMenu;




//GETS

int getInt (char mensaje[]);
float getFloat (char mensaje[]);
char getChar (char mensaje[]);


#endif // EMPLEADO_H_INCLUDED
