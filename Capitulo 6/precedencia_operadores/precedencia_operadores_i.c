/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, raiz1, raiz2;

    puts("\nEste programa resuelve ecuaciones de segundo grado cuyo discriminante es mayor que cero: \n");
    printf("- Introduce a: ");
    scanf("%f", &a);
    printf("- Introduce b: ");
    scanf("%f", &b);
    printf("- Introduce c: ");
    scanf("%f", &c);

    raiz1 = -b+sqrt(b*b-4*a*c)/2*a;
    raiz2 = (-b-sqrt(b*b-4*a*c))/(2*a);

    printf("\n\nRaíz 1: %.2f\nRaíz 2: %f\n\n", raiz1, raiz2);

    return 0;
}