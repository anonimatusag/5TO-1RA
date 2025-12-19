#include<stdio.h>
#include<conio.h>
int main()
{
	int Numeroinicial, Numerofinal, suma=0;
	printf("Ingrese el numero entero inicial: ");
	scanf("%d",& Numeroinicial);
	printf("Ingrese el numero entero final: ");
	scanf("%d",&Numerofinal);
	for (int i=Numeroinicial; i<=Numerofinal; i++)
	{
		suma+=i;
	}
	printf("La suma de todos los enteros desde %d hasta %d es: %d\n", Numeroinicial, Numerofinal, suma);
	getch ();
	return 0;
}
