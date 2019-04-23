// Estructuras

typedef struct{
    int dia;
    int mes;
    int ano;
}eFecha;

typedef struct{
    int id;
    char descripcion [31];
}eNacionalidad;

eNacionalidad nacionalidades[]={1,"Argentina",2,"Peru",3,"Paraguay",4,"Uruguay",5,"Venezuela",6,"Colombia",7,"Chile",8,"Bolivia"};

typedef struct{
    char apellido[31];
    char nombre[31];
    int DNI [9];
    int edad;
    int isEmpty;
    int idNacionalidad;
    eFecha fechaNac;
}ePersona;

// MENU

void Menu();


// ALTA, BAJA Y MODIFICACION

void alta( ePersona pers[], int cantidad );
void baja( ePersona pers[], int cantidad );


// MOSTRAR

void mostrarUno( ePersona per );
void mostrarTodos( ePersona pers[], int cantidad );

//ORDENAR
void ordenar (ePersona pers[], int cantidad);

//GETS

int getInt (char mensaje[]);
float getFloat (char mensaje[]);
char getChar (char mensaje[]);
