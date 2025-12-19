#include<stdio.h>
#include<conio.h>
int main() {
    int i, numeros[10]; 
    for (i = 0; i < 10; i++) 
	{
        printf("Ingrese un número: ");
        scanf("%d", &numeros[i]);
    }

    printf("Los números ingresados son:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

