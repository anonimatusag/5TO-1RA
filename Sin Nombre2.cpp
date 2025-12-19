#include <stdio.h>
#include <conio.h>
int main()
{
	float radio, perimetro;
	const float PI=3.14159;
	printf("Ingrese numero de radio");
	scanf("%f",&radio);
	perimetro=2*PI*radio;
	printf("El perimetro es: %.2f",perimetro);
	return 0;
}
