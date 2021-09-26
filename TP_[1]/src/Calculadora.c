/*
 ============================================================================
 Name        : Calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
*/

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
	setbuf(stdout, NULL);
    int a, b;
    int menuOpciones;

    printf("Ingrese el primer numero: \n");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: \n");
    scanf("%d", &b);

    system("cls");

    printf("Menu de opciones\n\n");
    printf("1. Sumar (%d + %d)\n", a, b);
    printf("2. Restar(%d - %d)\n", a, b);
    printf("3. Multiplicar(%d * %d)\n", a, b);
    printf("4. Dividir(%d / %d)\n", a, b);
    printf("5. Factorial(!%d)\n", a);
    printf("6. Cancelar\n");
    printf("\nIndique opcion: ");
    fflush(stdin);
    scanf("%d", &menuOpciones);

    float resultado = menu(menuOpciones, a, b);

    switch(menuOpciones)
    {
        case 1:
            printf("%d + %d = %.0f", a, b, resultado);
        break;

        case 2:
            printf("%d - %d = %.0f", a, b, resultado);
        break;

        case 3:
            printf("%d * %d = %.0f", a, b, resultado);
        break;

        case 4:
            if(b == 0)
            {
                printf("No es posible dividir por 0.");
            }
            else
            {
                printf("%d / %d = %.2f", a, b, resultado);
            }
        break;

        case 5:
            if(a < 0)
            {
                printf("No es posible realizar esta operacion con un numero negativo.");
            }
            else
            {
                printf("%d = %.0f", a, resultado);
            }
        break;

        case 6:
            return 0;
        break;

        default:
            printf("Opcion invalida\n");
        break;
    }
    return 0;
}


