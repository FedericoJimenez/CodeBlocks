#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    ArrayList* lista;
    lista = (lista*) malloc(sizeof(ArrayList));
    Employee* e1;
    e1 = (e1*) malloc(sizeof(Employee));

    e1 -> id = 666;
    strcpy(e1 -> name = "Juan");
    strcpy(e1 -> lastName = "Gomez");
    e1 -> isEmpty = 1;

    largoP = al_len(lista)
    al_add(lista, e1);
    auxE1 = (Employee*) al_get(lista, 0);

    printf("%d", largoP);
    return 0;
}
