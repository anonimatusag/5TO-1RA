#include<stdio.h>
#include<conio.h>
main()
{
	float i,valor,opcion,resul;
	opcion=1;
	opcion=2;
	printf("presione 1 para sumar o 2 para restar \n");
	scanf("%f", &opcion);
	if(opcion==1)
	{
		printf("ingrese el valor inicial \n");
		scanf("%f", &valor);
		for(i=1;i<=10;i=i+1)
		{
			resul=valor++;
			printf("el rultado es %f \n", resul);
		}
		if(resul>0)
		{
			printf("el resultado es positivo \n");
		}
		else
		{
			printf("el resultado es negativo \n");
		}
	}
	else
	{
		if(opcion==2)
		{
			printf("ingrese el valor inicial \n");
			scanf("%f", &valor);
			for(i=1;i<=10;i=i+1)
			{
				resul=valor--;
				printf("el rultado es %f \n", resul);
			}
			if(resul<0)
			{
				printf("el resultado es negativo \n");
			}
			else
			{
				printf("el resultado es positivo \n");
			}
		}
		else
		{
			printf("opcion invalida");
		}
	}
	getch();
	return 0;
}
