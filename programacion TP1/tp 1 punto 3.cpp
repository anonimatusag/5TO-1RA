#include<stdio.h>
#include<conio.h>
main ()
{
float cuatrimestre1,cuatrimestre2,cuatrimestre3;
float promedio;
printf ("ingrese las notas del alumno \n");
printf ("primer cuatrimestre : \n");
scanf("%f",&cuatrimestre1);
printf ("segundo cuatrimestre : \n");
scanf("%f",&cuatrimestre2);
printf ("tercer cuatrimestre : \n");
scanf("%f",&cuatrimestre3);
promedio=(cuatrimestre1+cuatrimestre2+cuatrimestre3)/3;
printf ("el promedio es %.2f",promedio);
getch ();
return 0;
}
