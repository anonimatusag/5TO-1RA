#include<stdio.h>
#include<conio.h>
int main()
{
	int ciclos=5, contador=1;
	printf("Sin mostrar el numero del ciclo:\n");
	while(contador<=ciclos)
	{
		printf("Esto es un ciclo\n");
		contador++;
	}
	contador=1;
	printf("\nMostrando el numero del ciclo:\n");
	while(contador<=ciclos)
	{
		printf("Ciclo%d: Esto es un bucle\n",contador);
		contador++;
	}
	getch ();
	return 0;
}
