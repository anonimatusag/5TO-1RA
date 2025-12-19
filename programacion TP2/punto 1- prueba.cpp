#include<stdio.h>
#include<conio.h>
main()
{
	float lado2,lado1,base,num1;
	float perim,area;
	printf("ingrese el valor de la base \n");
	scanf("%f", &base);
	printf("ingrese el valor del lado1 \n");
	scanf("%f", &lado1);
	printf("ingrese el valor del lado2 \n");
	scanf("%f", &lado2);
	printf("ingrese 1 para obtener el area \n");
	printf("ingrese 2 para obtener el perimetro \n");
	scanf("%f", &num1);
	if(1==1)
	{
		printf("obtener el area \n");
		area=(base*lado1)/2;
	    printf("el area es %.2f \n", area);
	}
	else
	{
		printf("obtener el perimetro \n");
		perim=lado1+lado2+base;
		printf("el perimetro es %f \n", perim);
	}
	getch();
	return 0;
}
