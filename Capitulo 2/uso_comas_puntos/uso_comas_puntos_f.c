/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    float resistencia1, resistencia2, resistencia3, resistenciaGlobal;
    char tipoDeConexion;

    puts("¡Hola! Este programa calcula el valor global de la resistencia formada por 3 resistencias proporcionadas por el usuario.");

    printf("Introduce el valor de la resistencia 1: ");
    scanf("%f", &resistencia1);
    printf("Introduce el valor de la resistencia 2: ");
    scanf("%f", &resistencia2);
    printf("Introduce el valor de la resistencia 3: ");
    scanf("%f", &resistencia3);

    printf("¿Las resistencias están conectadas en serie (s) o en paralelo (p)?: ");
    getchar();
    scanf("%c", &tipoDeConexion);

    if(tipoDeConexion == 's') resistenciaGlobal = resistencia1 + resistencia2 + resistencia3;
    else resistenciaGlobal = 1.0/((1/resistencia1)+(1/resistencia2)+(1/resistencia3));

    printf("\nEl valor de la resistencia global es de %.2f Ohmios.", resistenciaGlobal);

    return 0;
}