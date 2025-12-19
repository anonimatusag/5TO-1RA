#include<stdio.h>
#include<conio.h>
int main()
{
	int ciclos=5;
	printf("Sin mostrar el numero del ciclo:\n");
	for(int contador=1; contador<=ciclos; contador++)
	{
		printf("Ciclo%d: Esto es un bucle\n",contador);
	}
	getch();
	return 0;
}
