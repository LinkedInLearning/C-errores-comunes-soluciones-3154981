/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

float calcularSuma(float a, float b);
float calcularResta(float a, float b);
float calcularProducto(float a, float b);
float calcularDivision(float a, float b);

int main(){

    float a, b, suma, resta, producto, division;

    printf("Introduce el operando 1: ");
    scanf("%f", &a);
    printf("Introduce el operando 2: ");
    scanf("%f", &b);

    suma = calcularSuma(a,b);
    resta = calcularResta(a,b);
    producto = calcularProducto(a,b);
    division = calcularDivision(a,b);

    puts("Los resultados de las operaciones son: ");
    printf("- Suma: %.2f\n", suma);
    printf("- Resta: %.2f\n", resta);
    printf("- Producto: %.2f\n", producto);
    printf("- División: %.2f\n", division);

    return 0;
}

float calcularSuma(float a, float b){
    return a+b;;
}

float calcularResta(float a, float b){
    return a-b;
}


float calcularProducto(float a, float b){
    return a*b;
}

float calcularDivision(float a, float b){
    return a/b;
}