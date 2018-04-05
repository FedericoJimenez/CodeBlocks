#include <stdio.h>
#include <stdlib.h>

int pedirNumero();

int main()
{
    int numero;
    numero = pedirNumero();
    printf("El numero es: %d", numero);
    return 0;
}

int pedirNumero()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    return numero;
}
