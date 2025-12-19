#include<stdio.h>

struct alumno {
    char nombre[10];
    int nota1,nota2,nota3;
    float prom;
};

int main() {
    struct alumno alumno;

    printf("ingrese el nombre del alumno ");
    fgets(alumno.nombre,sizeof(alumno.nombre),stdin);

    printf("Ingrese la nota del alumno ");
    scanf("%d", &alumno.nota1);
    printf("Ingrese la nota del alumno ");
    scanf("%d", &alumno.nota2);
    printf("Ingrese la nota del alumno ");
    scanf("%d", &alumno.nota3);

    printf("\nNombre del estudiante: %s\n ", alumno.nombre);
    printf("Nota del estudiante: %d\n", alumno.nota1);
    printf("Nota del estudiante: %d\n", alumno.nota2);
    printf("Nota del estudiante: %d\n", alumno.nota3);

    prom=(nota1+nota2+nota3)/3;
    printf("se mostrara el promedio %f\n ",prom);
    if(prom>=7)
    {
        printf("aprueba");
    }
    else
    {
        printf("desaprueba");
    }
   return 0;
}
