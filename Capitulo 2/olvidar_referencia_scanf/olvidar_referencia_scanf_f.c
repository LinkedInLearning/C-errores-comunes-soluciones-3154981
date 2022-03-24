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
    
    float a,b;
    
    printf("Introduce el operando 1: ");
    scanf("%f", &a);
    printf("Introduce el operando 2: ");
    scanf("%f", &b);
    
    puts("Los resultados de las operaciones son: ");
    printf("- Suma: %.2f\n", suma(a,b));
    printf("- Resta: %.2f\n", resta(a,b));
    printf("- Producto: %.2f\n", producto(a,b));
    printf("- División: %.2f\n", division(a,b));
    
    return 0;
    
}

float suma(float a, float b){
    return a+b;
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