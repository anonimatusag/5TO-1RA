#include<stdio.h>
#include<conio.h>
main ()
{
int numeros[9],i,num1,sum=0,pro;
printf ("cantidad de valores: ");
scanf("%d",&num1);
for(i=0;i<num1;i++)
{
printf ("ingrese numeros %d: ",i+1);
scanf("%d",&numeros[i]);
sum +=numeros[i];
}
pro=sum/num1;
printf ("el promedio es: %d",pro);

getch ();
return 0;
}
