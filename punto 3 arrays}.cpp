#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Ingrese un numero entero: ");
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        if (numeros[i] == 0) {
            printf("Error \n", i);
        }
    }

    return 0;
}

