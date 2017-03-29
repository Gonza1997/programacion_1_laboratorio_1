#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int numLegajo ();
int validarEnt (int dato, int inferior, int superior);
int sueldoNeto();
char sexo();

int main()
{
    int legajo;
    int sueldo;
    int sexoA;
    legajo = numLegajo();
    sueldo = sueldoNeto();
    sexoA = sexo();


    return 0;
}

int numLegajo ()
{
    int dato;
    printf("Ingrese su legajo: ");
    scanf("%d", &dato);
    dato = validarEnt(dato, 1000, 9999);
    printf("Su legajo es: %d", dato);

    return dato;
}

int validarEnt (int dato, int inferior, int superior)
{
    while(dato < inferior || dato > superior)
    {
        printf("Por favor ingrese un dato entre %d y %d: ", inferior, superior);
        scanf("%d", &dato);

    }
    return dato;
}

int sueldoNeto()
{
    int dato;
    printf("Por favor ingrese el sueldo: ");
    scanf("%d", &dato);
    dato = validarEnt(dato, 1500, 10000);
    printf("Su sueldo es: %d", dato);
    return dato;
}

char sexo()
{
    char sexo;
    printf("Ingrese su sexo: ");
    sexo = getch();

    while(sexo != "f" && sexo != "m")
    {
        printf("Por favor ingrese 'f' o 'm': ");
        sexo = getch();
    }
    printf("Su sexo es: %c", sexo);
    return sexo;
}
