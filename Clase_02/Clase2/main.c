#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    int numero;
    int contador=0;
    int maximo;
    int minimo;
    int contadorPar = 0;
    int contadorImpar = 0;
    int contador15 = 0;
    int contador29 = 0;
    int contador30 = 0;
    int imparMenor;
    int sumador = 0;
    int sumatoriaPares = 0;
    int sumatoriaImpares = 0;
    int acumImpar = 0;
    int i;
    float promedio;
    char respuesta = 's';

    while(respuesta == 's')
    {
        printf("\nIngrese un numero: ");
        scanf("%d", &numero);

        if(contador == 0)
        {
            maximo = numero;
            minimo = numero;

        }

        else
        {
            if(numero > maximo)
            {
                maximo = numero;
            }
            if(numero < minimo)
            {
                minimo = numero;
            }

        }

        if(numero % 2 == 0)
        {
            contadorPar++;
            sumatoriaPares = sumatoriaPares + numero;
        }
        else
        {
            if(contadorImpar == 0)
            {
                imparMenor = numero;
            }
            else
            {
                if(numero < imparMenor)
                {
                    imparMenor = numero;
                }
            }
            contadorImpar++;
            sumatoriaImpares = sumatoriaImpares + numero;

        }

        if(contadorImpar == 0)
            {
                imparMenor = 0;
            }

        if(numero >= 3)
        {
            if(numero <= 15)
            {
                contador15++;
            }
            else
            {
                if(numero <= 29)
                {
                    contador29++;
                }
                else
                {
                    contador30++;
                }
            }
        }



        sumador = sumador + numero;
        contador++;

        printf("¿Desea continuar?");
        respuesta = tolower(getch());
    }
    promedio = (float)sumador / contador;



    printf("\n El numero de pares es: %d y el numero de impares es: %d", contadorPar, contadorImpar);
    printf("\n La sumatoria de los pares es: %d y la sumatoria de los impares es: %d",sumatoriaPares, sumatoriaImpares);
    printf("\n El promedio de todos los numeros es: %.1f",promedio);
    printf("\n El maximo es: %d y el minimo es: %d",maximo,minimo);
    printf("\n El numero impar menor es: %d",imparMenor);
    printf("\n Numeros entre 3 y 15: %d \n Numeros entre 16 y 29: %d \n Numeros mayor o iguales a 30: %d",contador15, contador29, contador30);

    for(i = sumatoriaImpares; i > 0; i--)
            {
                printf("\n %d", i);
                acumImpar = acumImpar + i;
            }

    printf("\n La sumatoria de los numeros que anteceden a la sumatoria impar es: %d",acumImpar);



    return 0;
}
