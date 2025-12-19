#include<stdio.h>
#include<conio.h>
int main()
{
	int numeros[10];
	int suma=0;
	for(int i=0;i<10;i++)
	{
		printf("ingrese los numeros: ");
		scanf("%d", &numeros[i]);
		suma +=numeros[i];
		if(numeros[i]>0)
		{
			printf("el numero es valido");
		}
		else
		{
			printf("el numero es invalido");
		}
	}
	printf("los numeros ingresados son: ");
	for(int i=0;i<10;i++)
	{
		printf("%d", numeros[i]);
	}
	getch();
	return 0;
}
