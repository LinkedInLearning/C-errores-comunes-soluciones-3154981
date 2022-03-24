/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    float a, b,resultadoSuma, resultadoResta, resultadoProducto, resultadoDivisionReal;

    printf("Introduce el operando 1: ");
    scanf("%f", &a);

    printf("Introduce el operando 2: ");
    scanf("%f", &b);

    a + b = resultadoSuma;
    a - b  = resultadoResta;
    a * b = resultadoProducto;
    a / b = resultadoDivisionReal;

    puts("Los resultados de las operaciones son: ");
    printf("- Suma: %.2f\n", resultadoSuma);
    printf("- Resta: %.2f\n", resultadoResta);
    printf("- Producto: %.2f\n", resultadoProducto);
    printf("- División: %.2f\n", resultadoDivisionReal);

    return 0;
}