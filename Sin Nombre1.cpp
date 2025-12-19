#include <stdio.h>
#include <conio.h>
int main() 
{
	float area, radio;
	const float PI=3.14159;
	printf("Ingrese el radio del circulo");
	scanf("%f",&radio);
	area=PI*radio*radio;
	printf("El area de circulo es:%.2f",area);
	getch();
	return 0;
}
