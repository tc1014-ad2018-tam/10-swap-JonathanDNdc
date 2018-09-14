/*
 * Este programa recibe 3 numeros y los ordena de menor a mayor.
 *
 * Autor: Jonathan Nuñez de Caceres.
 * Fecha: 13 de Septiembre del 2018.
 * Correo: A01411277@itesm.mx
 */

#include <stdio.h>

// Funcion que recibe la referencia de las variables a, b y c.
void Swap(int *a, int *b){
    // Variable de uso temporal para cambiar de lugar las variabes.
    int temp;

    // Si a es mayor que b se cambian de lugar.
    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    // Declaracion de variables.
    int a;
    int b;
    int c;

    // Se piden 3 numeros y se guardan.
    printf("Ingresa 3 numeros (sepa.rados por coma):");
    scanf("%d, %d, %d", &a, &b, &c);

    // Se le llama a la funcion con parametros de referencia para cada combinacion.
    Swap(&a, &b);
    Swap(&a, &c);
    Swap(&b, &c);
    printf("Los numeros en orden ascendiente: ");
    printf("%d, %d, %d", a, b, c);
    return 0;
}