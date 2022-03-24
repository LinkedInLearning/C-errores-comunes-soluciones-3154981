/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    float operando1, operando2, resultado;
    char tipoDeOperacion;

    printf("Introduce el operando 1: ");
    scanf("%f", &operando1);
    printf("Introduce el operando 2: ");
    scanf("%f", &operando2);
    
    getchar();
    printf("¿Qué operación deseas realizar (+,-,*,/): ");
    scanf("%c", &tipoDeOperacion);

    switch(tipoDeOperacion){
        case '+': resultado = operando1 + operando2; break;
        case '-': resultado = operando1 - operando2; break;
        case '*': resultado = operando1 * operando2; break;
        case '/': resultado = operando1 / operando2; break;
        default: resultado = 0; break;
    }

    printf("El resultado de la operación es: %.2f\n", resultado);
    
    return 0;
}