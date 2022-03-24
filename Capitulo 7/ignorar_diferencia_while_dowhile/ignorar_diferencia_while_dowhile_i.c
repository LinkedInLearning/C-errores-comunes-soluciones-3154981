/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    float temperatura;

    while(temperatura > 2.5 && temperatura < 38.7){
        printf("\nIntroduce un número: ");
        scanf("%f", &temperatura);

        puts("Los parámetros de medición son normales.");
    }

    puts(“ALERTA”);

    return 0;
}