#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float radio,area;
	printf("se mostrará el area de un circulo\n");
	printf ("coloque el radio : \n");
	scanf("%f",&radio);
	area=M_PI*pow(radio,2);
	printf("el area del circulo con radio %.2f es: %.2f",radio,area);
	getch ();
	return 0;
}
