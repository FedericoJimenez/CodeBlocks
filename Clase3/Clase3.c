#include <stdio.h>
#include <stdlib.h>


/*Declaracion de funcion - prototipo de funcion*/

int mostrarEincrementar(int);
int main()
{
    int numero;
    int incremento;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    incremento = mostrarEincrementar(numero);
    printf("\nEl numero incrementado es: %d", incremento);
    return 0;
}
/*Implementacion o desarrollo de funcion*/
int mostrarEincrementar(int numero)
{
    int retorno;
    printf("El numero ingresado es: %d", numero);
    retorno = numero + 10;
    return retorno;
}
