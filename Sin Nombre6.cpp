#include<stdio.h>
#include<conio.h>
int main()
{
	float lado, perimetro;
	printf("Indicar numero del lado");
	scanf("%f",&lado);
	perimetro=lado+lado+lado;
	printf("El perimetro del triangulo es: %.2f",perimetro);
	return 0;
}
