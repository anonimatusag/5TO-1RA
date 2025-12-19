#include<stdio.h>
#include<conio.h>
int main()
{
	float i,resultado,opcion,valor;
	printf("seleccione su opcion : 1- sumar \n");
	printf("seleccione su opcion : 2- restar \n");
	scanf("%f",&opcion);
	printf("ingrese el valor inicial \n");
	scanf("%f",&valor);
	if(opcion==1)
	{
		for(i=1; i<=10;i=i+1)
	     {
		 resultado=valor++;
		 printf("el resultado de la suma %f2 \n",resultado);
		 }
		 if(resultado>0)
       {
       	printf("es positivo %f \n");
	   }
	   else
	   {
	   	printf("es negativo %f \n");
	   }
	}
		 else
		 {
		 	for(i=1 ; i<=10 ;i++)
		 	{
		 		resultado=valor--;
		 		printf("el resultado de la resta es %f\n",resultado);
			 }
			 if(resultado<0)
       {
       	printf("es negativo %f\n ");
	   }
	   else
	   {
	   	printf("es positivo %f\n");
	   }
		}
       
	return 0;
}

