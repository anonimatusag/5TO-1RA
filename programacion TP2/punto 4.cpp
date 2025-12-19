#include<stdio.h>
#include<conio.h>
main()
{
	float nota1,nota2,nota3,nota4;
	float promedio;
	printf("ingrese la nota1 \n");
	scanf("%f", &nota1);
	printf("ingrese la nota2 \n");
	scanf("%f", &nota2);
	printf("ingrese la nota3 \n");
	scanf("%f", &nota3);
	printf("ingrese la nota4 \n");
	scanf("%f", &nota4);
	promedio=(nota1+nota2+nota3+nota4)/3;
	printf("el promedio del alumno es %.2f \n", promedio);
	if(promedio<4)
	{
		printf("desempeño muy bajo \n");
	}
	else
	{
		if(promedio<7)
		{
			printf("desempeño bajo \n");
		}
		else
		{
			if(promedio<8)
			{
				printf("desempeño bueno \n");	
			}
			else
			{
				if(promedio>8)
				{
					printf("desempeño muy bueno \n");
				}
			}	
		}
	}
	getch();
	return 0;
}

