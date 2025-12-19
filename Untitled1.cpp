 #include <stdio.h>
#include <conio.h>
int main()
{
 int numeros[10], i, promedio;
 for(i=0; i<10; i++)
 {
 printf("ingresar los numeros \n");
 scanf("%d", &numeros);
 }
 promedio=numeros[10]/10;
printf("El promedio es: %d\n", promedio);
return 0;
}


