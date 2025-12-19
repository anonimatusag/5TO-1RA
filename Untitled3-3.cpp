#include<stdio.h>
#include<conio.h>
int main()
{
	float nota1,nota2,nota3;
	float promedio;
	while(promedio<1)
	{
		printf("Ingresar la nota1\n");
		scanf("%f",&nota1);
		printf("Ingresar la nota2\n");
		scanf("%f",&nota2);
		printf("Ingresar la nota3\n");
		scanf("%f",&nota3);
		promedio=(nota1+nota2+nota3)/3;
	}
	printf("El resultado es %.2f\n",promedio);
	getch();
	return 0;
}
