#include <stdio.h>
#include <stdlib.h>

int factorial (int);


int main()
{
    char seguir='s';
    int opcion=0;

    float primerOperando = 0;
    float segundoOperando = 0;
    float suma;
    float resta;
    float division;
    float producto;
    int factorialA;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A= %.2f)\n", primerOperando);
        printf("2- Ingresar 2do operando (B= %.2f)\n", segundoOperando);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer numero: ");
                scanf("%f", &primerOperando);
                break;
            case 2:
                printf("Ingrese el segundo numero: ");
                scanf("%f", &segundoOperando);
                break;
            case 3:
                suma = sumar(primerOperando, segundoOperando);
                printf("La suma es: %f\n", suma);
                break;
            case 4:
                resta = restar(primerOperando, segundoOperando);
                printf("La resta es: %f\n", resta);
                break;
            case 5:
                while(segundoOperando < 0)
                {
                    printf("Ingrese un divisor mayor a 0: ");
                    scanf("%f", &segundoOperando);
                }
                division = dividir(primerOperando, segundoOperando);
                printf("La division es: %.2f\n", division);

                break;
            case 6:
                producto = multiplicar(primerOperando, segundoOperando);
                printf("El producto es: %f", producto);
                break;
            case 7:
                factorialA = factorial(primerOperando);
                printf("El factorial es: %d", factorialA);
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }


    return 0;
}

int factorial (int numero)
{
    int factorialA = 1;
    int i;
    int acumula = 1;
    for(i = 0; i < numero; i++)
    {

    }
    return factorialA;
}
