/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

float suma(float a, float b);
float resta(float a, float b);
float producto(float a, float b);
float division(float a, float b);

int main(){

    float a,b, resultadoSuma, resultadoResta, resultadoProducto, resultadoDevisionReal;

    printf("Introduce el operando 1: ");
    scanf("%f", &a);

    printf("Introduce el operando 2: ");
    scanf("%f", &b);

    resultadoSuma = suma(a,b);
    resultadoResta = resta(a,b);
    resultadoProducto = producto(a,b);
    resultadoDevisionReal = division(a,b);

    puts("Los resultados de las operaciones son: ");
    printf("- Suma: %.2f\n", resultadoSuma);
    printf("- Resta: %.2f\n", resultadoResta);
    printf("- Producto: %.2f\n", resultadoProducto);
    printf("- División: %.2f\n", resultadoDevisionReal);

    return 0;
}

float suma(float a, float b){
    return a + b;
}

float resta(float a, float b){
    return a-b;
}

float producto(float a, float b){
    return a*b;
}

float division(float a, float b){
    return a/b;
}