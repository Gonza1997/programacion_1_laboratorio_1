#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int numLegajo ();
int validarEnt (int dato, int inferior, int superior);
int sueldoNeto();
int edad();
char sexo();
int ejercicio1(char sexo, int sueldo, int contador, int contadorM);
int ejercicio2(char sexo, int edad, int contador);

int main()
{
    int legajo;
    int sueldo;
    int sexoA;
    int edadA;
    int contadorH = 0;
    int contadorM = 0;
    int contadorM38 = 0;
    char respuesta = 's';

    while(respuesta == 's')
    {
        legajo = numLegajo();
        sueldo = sueldoNeto();
        sexoA = sexo();
        edadA = edad();
        contadorH = ejercicio1(sexoA, sueldo, contadorH, contadorM);
        contadorM38 = ejercicio2(sexoA, edadA, contadorM38);

        printf("Desea seguir? (s/n) : ");
        respuesta = tolower(getch());
    }



    return 0;
}

int numLegajo ()
{
    int dato;
    printf("\nIngrese su legajo: ");
    scanf("%d", &dato);
    dato = validarEnt(dato, 1000, 9999);
    printf("Su legajo es: %d", dato);

    return dato;
}

int validarEnt (int dato, int inferior, int superior)
{
    while(dato < inferior || dato > superior)
    {
        printf("\nPor favor ingrese un dato entre %d y %d: ", inferior, superior);
        scanf("%d", &dato);

    }
    return dato;
}

int sueldoNeto()
{
    int dato;
    printf("\nPor favor ingrese el sueldo: ");
    scanf("%d", &dato);
    dato = validarEnt(dato, 1500, 10000);
    printf("\nSu sueldo es: %d", dato);
    return dato;
}

char sexo()
{
    char sexo;
    printf("\nIngrese su sexo: ");
    sexo = tolower(getch());

    while(sexo != 'f' && sexo != 'm')
    {
        printf("\nPor favor ingrese 'f' o 'm': ");
        sexo = tolower(getch());
    }
    printf("\nSu sexo es: %c", sexo);
    return sexo;
}

int edad()
{
    int edad;
    printf("\nIngrese su edad: ");
    scanf("%d", &edad);
    edad = validarEnt(edad, 18, 65);
    printf("\nSu edad es: %d", edad);
    return edad;
}

int ejercicio1(char sexo, int sueldo, int contador, int contadorM)
{
    if(sexo == 'm')
    {
        if(sueldo < 7500 && sueldo > 2000)
        {
            contador++;
        }
    }
    else
    {
        contadorM++;
    }
    printf("\n%d", contador);
    return contador;

}

int ejercicio2(char sexo, int edad, int contador)
{
    if(sexo == 'f' && edad < 38)
    {
        contador++;
    }
    return contador;
}
