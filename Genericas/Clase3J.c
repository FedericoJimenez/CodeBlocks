#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char[], int, int);
int validarEntero(int, int, int, char[]);

int main()
{
    int edad;
    int legajo;
    edad = pedirEntero(" edad: ", 18, 60);
    legajo = pedirEntero(" legajo: ", 1, 1000);
    printf("La edad es: %d", edad);
    printf("\nEl legajo es: %d", legajo);
    return 0;
}

int pedirEntero(char mensaje[], int min, int max)
{
    int dato;
    printf("Ingrese %s", mensaje);
    scanf("%d", &dato);
    dato = validarEntero(dato, min, max, mensaje);
    return dato;
}

int validarEntero(int dato, int min, int max, char mensaje[])
{
    while(dato<min || dato>max)
    {
        printf("Error, reingrese %s", mensaje);
        scanf("%d", &dato);
    }
}
