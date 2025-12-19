#include<stdio.h>
#include<conio.h>
int main()
{
	char apellidos[50];
	int i=0;
    printf("ingrese su apellido");
    scanf("%s",&apellidos);
    printf("se deletreara su apellido \n");
    while(apellidos[i] != '\0')
    {
    	printf("%c\n", apellidos[i]);
    	i++;
	}
	return 0;
}
