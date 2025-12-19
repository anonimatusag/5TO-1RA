#include<stdio.h>

struct alumno {
    char nombre[10];
};

int main() {
    struct alumno alumno;
    int nota1,nota2,nota3;
    int prom;
    printf("ingrese el nombre del alumno ");
    fgets(alumno.nombre,sizeof(alumno.nombre),stdin);

    printf("Ingrese la nota del alumno ");
    scanf("%d", &nota1);
    printf("Ingrese la nota del alumno ");
    scanf("%d", &nota2);
    printf("Ingrese la nota del alumno ");
    scanf("%d", &nota3);

    printf("\nNombre del estudiante: %s\n ", alumno.nombre);
    printf("Nota del estudiante: %d\n", nota1);
    printf("Nota del estudiante: %d\n", nota2);
    printf("Nota del estudiante: %d\n", nota3);

    prom=(nota1+nota2+nota3)/3;
    if(prom>=7)
    {
        printf("aprueba");
    }
    else
    {
        printf("desaprueba");
    }
    printf("se mostrara el promedio: %d\n ",prom);
   return 0;
}
