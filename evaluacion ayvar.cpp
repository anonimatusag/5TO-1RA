#include<stdio.h>
#include<conio.h>
int main() 
{
    int numeros[10],i,num1,reemp;

    printf("Ingrese 10 numeros \n");
    for (i = 0; i < 10; i++) 
	{
        printf("numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Ingrese el numero para que se busque");
    scanf("%d", &num1);

    printf("Ingrese el numero para reemplazar");
    scanf("%d", &reemp);

    for (i = 0; i < 10; i++) 
	{
        if (numeros[i] == num1)
		{
            numeros[i] = reemp;
        }
    }
      for (i = 0; i < 10; i++) 
	{
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("se mostraran los numeros reemplazados\n");
   

    return 0;
}

