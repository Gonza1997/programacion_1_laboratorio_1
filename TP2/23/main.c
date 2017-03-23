#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int numLegajo ();
int validacion (int dato, int inferior, int superior);

int main()
{
    int legajo;
    legajo = numLegajo();



    return 0;
}

int numLegajo ()
{
    int dato;
    printf("Ingrese su legajo: ");
    scanf("%d", &dato);
    dato = validacion(dato, 1000, 9999);
    printf("Su legajo es: %d", dato);

    return dato;
}

int validacion (int dato, int inferior, int superior)
{
    while(dato < inferior || dato > superior)
    {
        printf("Por favor ingrese un dato entre %d y %d", inferior, superior);
        scanf("%d", &dato);

    }
    return dato;
}
