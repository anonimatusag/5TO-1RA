#include<stdio.h>
#include<conio.h>
main()
{
	float lado2,lado1,area;
	float perim;
	printf("ingrese el valor del lado1 \n");
	scanf("%f", &lado1);
	printf("ingrese el valor del lado2 \n");
	scanf("%f", &lado2);
	area=(lado1*lado2)/2;
	printf("el area es %.2f \n",area);
	if(1)
	{
		printf("calcular el triangulo");
	}
	else
	{
		printf("calcular el perimetro");
		perim=3+3+4,5;
	}
	getch();
	return 0;
}
