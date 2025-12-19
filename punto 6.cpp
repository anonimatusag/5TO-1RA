#include <stdio.h>
#include<conio.h>
int main() {
    int fila, columna, matriz , contador ;
    int num1, num2;
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    for (fila = 0; fila < fila; fila++) 
    {
        for (columna = 0; columna < columna; columna++) 
        {
            matriz[fila][columna] = num1 + contador;
            contador++;
        }
    }
    printf("Matriz cargada:\n");
    for (fila = 0; fila < filas; fila++) 
    {
        for (columna = 0; columna < columnas; columna++) 
        {
            printf("%d ", matriz[fila][columna]);
        }
        printf("\n");
    }

    return 0;
}
