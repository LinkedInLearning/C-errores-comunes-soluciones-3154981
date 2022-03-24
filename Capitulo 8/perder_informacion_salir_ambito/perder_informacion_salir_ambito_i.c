/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>
#include <math.h>

float solicitarCoeficiente(char coeficiente);
float calcularRaiz1(float a, float b, float c);
float calcularRaiz2(float a, float b, float c);

int main(){

    float a, b, c, raiz1, raiz2;

    puts("Este programa resuelve ecuaciones de segundo grado cuyo discriminante es mayor que cero: \n");
    a = solicitarCoeficiente('a');
    b = solicitarCoeficiente('b');
    c = solicitarCoeficiente('c');

    raiz1=calcularRaiz1(a,b,c);
    raiz2=calcularRaiz2(a,b,c);

    printf("\n\nRaíz 1: %.2f\nRaíz 2: %f\n\n", raiz1, raiz2);

    return 0;
}

float solicitarCoeficiente(char coeficiente){
    float valor;
    printf("- Introduce %c: ", coeficiente);
    scanf("%f", &valor);
}

float calcularRaiz1(float a, float b, float c){
    float discriminante, raiz;
    discriminante = b*b-4*a*c;
    raiz = (-b+sqrt(discriminante))/(2*a);
    return raiz;
}

float calcularRaiz2(float a, float b, float c){
    float discriminante, raiz;
    discriminante = b*b-4*a*c;
    raiz = (-b-sqrt(discriminante))/(2*a);
    return raiz;
}