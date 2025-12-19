#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int suma=0;
	int valor;
	printf("cuantos valores desea ingresar? \n");
	scanf("%d", &n);
	int numeros[n];
	for(int i=0;i<n;i++)
	{
		printf("ingrese un numero %d: \n", i+1);
		scanf("%d", &numeros[i]);
		suma+=numeros[i];
	}
	printf("los numeros ingresados son: numeros \n");
	for(int i=0;i<n;i++)
	{
		printf("%d", numeros[i]);
	}
	double promedio = (double)suma / n;
    printf("\nEl promedio de los numeros ingresados es: %.2f", promedio);
	getch();
	return 0;
}
