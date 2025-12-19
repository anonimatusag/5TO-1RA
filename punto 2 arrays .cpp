#include <stdio.h>

int main() {
    int carga[8];
    printf("Ingresa 8 valores binarios (0 o 1):\n");
    for (int i = 0; i < 8; i++) 
	{
        scanf("%d", &carga[i]);
    }
    printf("Carga del byte en memoria:\n");
    for (int i = 0; i < 8; i++) 
	{
        printf("%d ", carga[i]);
    }
    printf("\n");

    return 0;
}

