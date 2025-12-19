#include<stdio.h>
#include<conio.h>
int main()
{
	int cantidad=0;
	float numero, suma=0.0, promedio;
	printf("Ingrese la cantidad de numeros por promediar: ");
	scanf("%d",&cantidad);
	for(int i=0; i<cantidad;i++)
	{
		printf("Ingrese el numero %d: ",i+1);
		scanf("%d",&numero);
		suma+=numero;
	}
	promedio=suma/cantidad;
	printf("El promedio es: %.2d",promedio);
	getch();
	return 0;
}
