#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define P 20



void inicializarEstado(ePersona persona[], int tam);
int espacio(ePersona persona[], int tam);

int main()
{


    ePersona personas[P];
    inicializarEstado(personas, P);

    char seguir='s', respuesta;
    int opcion=0, lugar;
    int i, j;
    int long dni;
    char aux[20];

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            lugar = espacio(personas, P);
            if(lugar != -1)
            {
                for(i=0; i<P; i++)
                {
                    printf("Ingrese el documento: ");
                    scanf("%d", &personas[lugar].dni);
                    fflush(stdin);
                    printf("Ingrese el nombre: ");
                    scanf("%s", &personas[lugar].nombre);
                    fflush(stdin);
                    printf("Ingrese edad: ");
                    scanf("%d", &personas[lugar].edad);
                    fflush(stdin);
                    personas[lugar].estado = 1;

                    printf("%d \t %s \t %d \n", personas[i].dni, personas[i].nombre, personas[i].edad);
                    break;
                }
            }
            else
            {
                printf("No hay mas espacio. \n");
            }
            break;
        case 2:
            printf("Ingrese el documento que desea eliminar: ");
            scanf("%d", &dni);
            for(i=0; i<P; i++)
            {
                if(personas[i].estado == 1 && dni == personas[i].dni)
                {
                    printf("%d \t %s \t %d \n", personas[i].dni, personas[i].nombre, personas[i].edad);
                    printf("Esta seguro que desea eliminar?(s/n)");
                    respuesta = getche();
                    if(respuesta == 's')
                    {
                        personas[i].estado = 0;
                    }
                    else
                    {
                        printf("Accion cancelada.");
                    }
                }
            }
            break;
        case 3:


            for(i=0; i<P; i++)
            {
                if(personas[i].estado == 1)
                {
                    printf("%d \t %s \t %d \t \n", personas[i].dni, personas[i].nombre, personas[i].edad);
                }

            }
            break;
        case 4:
            break;
        case 5:
            seguir = 'n';
            break;
        }
    }

    return 0;
}

void inicializarEstado(ePersona persona[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        persona[i].estado = 0;
    }
}

int espacio(ePersona persona[], int tam)
{
    int lugar = -1, i;

    for(i=0; i<tam; i++)
    {
        if(persona[i].estado == 0)
        {
            lugar = i;
            break;
        }

        return lugar;
    }
}
