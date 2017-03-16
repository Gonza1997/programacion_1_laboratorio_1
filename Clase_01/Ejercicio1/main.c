#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int suma;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);

    printf("Ingrese el siguiente numero: ");
    scanf("%d", &numero2);

    suma = numero1 + numero2;

    if(suma < 0)
    {
        printf("La suma es: %d y es negativo",suma);
    }

    else
    {
        if(suma > 0)
        {
            printf("La suma es: %d y es positiva",suma);
        }
        else
        {
            printf("La suma es: 0");
        }
    }


    return 0;
}
