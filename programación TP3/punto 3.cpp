#include<stdio.h>
#include<conio.h>
main()
{
	float nota1,nota2,nota3;
	float prom;
	while(prom<1)
	{
		printf("ingrese la primera nota \n");
		scanf("%f", &nota1);
		printf("ingrese la segunda nota \n");
		scanf("%f", &nota2);
		printf("ingrese la tercera nota \n");
		scanf("%f", &nota3);
		prom=(nota1+nota2+nota3)/3;
		prom==prom;
	}
	printf("el promedio es %.2f", prom);
	getch();
	return 0;
}
