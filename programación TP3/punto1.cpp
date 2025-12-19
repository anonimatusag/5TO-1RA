#include<stdio.h>
#include<conio.h>
main()
{
	int ciclos=5;
	int cont=1;
	while(cont<=ciclos)
	{
		printf("esto es un bucle \n");
		cont++;
	}
	cont=1;
	printf("\n se mostrara la cantidad de ciclos \n");
	while(cont<=ciclos)
	{
		printf("ciclo %d : esto es un bucle \n", cont);
		cont++;
	}
	getch();
	return 0;
}
