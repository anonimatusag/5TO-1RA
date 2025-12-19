#include<stdio.h>
#include<conio.h>
int main (){
	int matriz[3][3], j, i, num;
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			printf("Ingrese cualquier numero: %d");
			scanf("%d",num);
			matriz[j][i]=num;
		}
	}
	printf("Los numeros son %d",matriz[j][i]);
	getch ();
	return 0;
}
