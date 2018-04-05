#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    float numero2;
    float numero3;
    char letra;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero1);
    printf("Ingrese un numero con coma: ");
    scanf("%f", &numero2);
    printf("Ingrese una letra: ");
    /*fflush(stdin);
    scanf("%c", &letra);*/
    letra = getch();
    numero3 = numero1 + numero2;
    printf("\nLa suma de los numeros es: %.2f", numero3);
    printf("\nLa letra es: %c", letra);
    return 0;
}
