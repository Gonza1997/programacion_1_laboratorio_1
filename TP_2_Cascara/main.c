#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define P 20

typedef struct
{
    char nombre[20];
    long dni;
    int edad;
    char estado;

}ePersona;


int main()
{
    ePersona personas[P];
    char seguir='s', respuesta;
    int opcion=0;
    int i;
    long dni;

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
                for(i=0; i<P; i++)
                {

                    printf("Ingrese el nombre: ");
                    scanf("%s", &personas[i].nombre);
                    fflush(stdin);
                    printf("Ingrese edad: ");
                    scanf("%d", &personas[i].edad);
                    fflush(stdin);
                    printf("Ingrese el documento: ");
                    scanf("%s", &personas[i].dni);
                    fflush(stdin);
                    printf("%d \t %s \t %d \n", personas[i].dni, personas[i].nombre, personas[i].edad);
                    break;
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
