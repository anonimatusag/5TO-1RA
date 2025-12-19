#include<stdio.h>
#include<conio.h>
int main()
{
    int byte[8];
    int suma=0;
    printf("Ingrese los valroes binario entre 0 o 1: ");
    for (int i=0;i <8;i++) 
	{
        printf("Ingrese el valro binario %d: ", i+1);
        scanf("%d", &byte[i]);
        suma += byte[i];
    }
   	printf("la equivalencia es : ");
   	for(int i=0;i<8;i++)
   	{
   		printf("%d", byte[i]);
	}
    getch();
    return 0;
}
