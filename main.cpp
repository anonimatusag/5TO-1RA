#include <stdio.h>

struct alumno {
    char nombre[10];
    int nota ;
};

int main() {
    struct alumno alumno;

    printf("ingrese el nombre del alumno ");
    fgets(alumno.nombre,sizeof(alumno.nombre),stdin);

    printf("Ingrese la nota del alumno ");
    scanf("%d", &alumno.nota);

    printf("\nNombre del estudiante: %s\n ", alumno.nombre);
    printf("Nota del estudiante: %d\n", alumno.nota);
   return 0;
}
