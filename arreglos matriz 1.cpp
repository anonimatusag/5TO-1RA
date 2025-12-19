#include <stdio.h>
#include <conio.h>
int main()
{
 int mat[3][3], i, j;
 for(i=0; i<=3; i++)
 {
 for(j=0; j<=3; j++)
 {
 printf("ingrese el numero",i);
 scanf("%d",&i);
 printf("ingrese el numero ",j);
 scanf("%d",&j);
 }
}
 for(i=0; i<=3; i++)
 {
 for(j=0; j<=3; j++)
 {
printf("mat[%d][%d] = %d \n");
}
}
getch();
return 0;
}

