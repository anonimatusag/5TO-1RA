#include<stdio.h>
#include<conio.h>
int main()
{
	float area, base, altura;
	printf("Indicar numero de la base");
	scanf("%f",&base);
	printf("Indicar numero de la altura");
	scanf("%f",&altura);
	area=(base*altura)/2;
	printf("El area del triangulo es: %.2f",area);
	return 0;
}
