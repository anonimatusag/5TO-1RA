#include<stdio.h>
#include<conio.h>
main()
{
	float nota1,nota2,nota3;
	float prom;
	while(prom<1)
	{
		printf("ingrese la nota1 \n");
		scanf("%f", &nota1);
		nota1=nota1<10;
		printf("ingrese la nota2 \n");
		scanf("%f", &nota2);
		nota1=nota2<10;
		printf("ingrese la nota3 \n");
		scanf("%f", &nota3);
		nota1=nota3<10;
		prom=(nota1+nota2+nota3)/3;
		printf("el promedio es %.2f", prom);
		prom=prom+1;
	}
	getch();
	return 0;
}
