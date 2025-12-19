#include<stdio.h>
#include<conio.h>
int main()
{
	float nota1,nota2,nota3;
	float prom;
	while(prom<1)
	{
	printf("ingresar la nota 1  \n");
	scanf("%f",&nota1);
	printf("ingresar la nota 2  \n");
	scanf("%f",&nota2);
	printf("ingresar la nota 3  \n");
	scanf("%f",&nota3);
	prom=(nota1+nota2+nota3)/3;
	}
	printf("el resultado es %.2f \n",prom);
	getch();
	return 0;
}
