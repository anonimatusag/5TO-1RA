#include<stdio.h>
#include<conio.h>
int main()
{
	int contra[8], suma;
	printf("ingrese una contraseña entre 5 y 8 caracteres: ");
	scanf("%d", &contra[8]);	
	if(contra[8]>=1)
	{
		printf("es un caracter alfanumerico");
	}
	else
	{
		printf("error \n");
		printf("se corregiran los errores");
	}
	
	
	getch();
	return 0;
}
