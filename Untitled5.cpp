#include <stdio.h>

int main() {
    char byteArr[8]; // Arreglo de 8 elementos (1 byte)

    // Solicitamos al usuario ingresar los valores binarios para cada bit
    printf("Ingresa 8 valores binarios (0 o 1):\n");
    for (int i = 0; i < 8; i++) {
        scanf("%hhd", &byteArr[i]); // Leemos valores como enteros de 8 bits (signed char)
    }

    // Mostramos la carga del byte en pantalla
    printf("Carga del byte en memoria:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", byteArr[i]);
    }
    printf("\n");

    return 0;
}

