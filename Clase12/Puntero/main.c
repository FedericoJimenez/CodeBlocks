#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    char nombre[50];
}ePersona;

int ePersona_setId(ePersona*, int);
int ePersona_setNombre(ePersona*, char*);
int ePersona_getId(ePersona*, int);
char* ePersona_getNombre(ePersona*);
int reservarEspacioPersona(ePersona);
int main()
{
    ePersona* pPersona;
    ePersona persona;
    pPersona = reservarEspacioPersona(persona);
    if (pPersona != NULL){
        if (ePersona_setId(pPersona,45) == -1){
            printf("Id incorrecto");
        }
        else{
            if (ePersona_setNombre(pPersona,"Juan") == -1)
            {
                printf("Nombre incorrecto");
            }else{
                printf("%d--%s", pPersona->id, pPersona->nombre);
            }
        }
    }
}

int setId(ePersona* this, int id){

    int ret = -1;
    if (this != NULL && id>0){
        ret = 1;
        this->id = id;
    }
}

/*int ePersona_setNombre(ePersona* this, char* nombre) {

    int ret = -1;
    if (this != NULL && nombre !=NULL && strlen(nombre)>3){
        ret = 1;
        this->nombre = nombre;
    }
}

int ePersona_getId(ePersona*){
    int ret = -1;
    if (this != NULL){
        ret = this -> id;
    }
    return ret;
}

char* ePersona_getNombre(ePersona*){
    char* ret = NULL;
    if (this != NULL){
        ret = this->nombre);
    }
    return ret;
}*/
int reservarEspacioPersona(ePersona){
    puntPersona = (ePersona*) malloc(sizeof(ePersona));
    return puntPersona;
}
