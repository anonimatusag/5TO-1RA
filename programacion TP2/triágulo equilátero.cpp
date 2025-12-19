#include<stdio.h>
#include<conio.h>
main()
{
	float lado,area;
	float opcion,perim;
	printf("ingrese el valor del lado1 \n");
	scanf("%f", &lado);
	area=(lado*lado)/2;
	printf("el area es %.2f \n",area);
	printf("presione 1 para obtener el perimetro");
	scanf("%d",&opcion);
	if(opcion==1)
	{
		perim=lado+lado+lado;
		printf("calcular el triangulo %.2f",perim);
	}
	else
	{
		printf("calcular el perimetro");
	
	}
	getch();
	return 0;
}
