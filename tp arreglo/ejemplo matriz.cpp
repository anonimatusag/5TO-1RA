#include<stdio.h>
#include<conio.h>
int main()
{
	int matriz[3][3], i, j, num;
		for(j = 0 ; j < 3 ; j++)
		{
			for(i = 0 ; i < 3 ; i++)
			{	
				printf("ingrese un numero: ");
				scanf("%d", &num);
				matriz[j][i] = num;
			}
		}
		printf("se mostraran los numeros \n", matriz);
		for(j = 0 ; j < 3 ; j++)
		{
			for(i = 0 ; i < 3 ; i++)
			{
				printf("%d", matriz[j][i]);
			}
			printf("\n");
		}
	getch();
	return 0;
}

