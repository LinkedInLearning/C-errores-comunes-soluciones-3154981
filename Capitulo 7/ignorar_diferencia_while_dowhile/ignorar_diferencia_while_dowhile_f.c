/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    float temperatura;

    do{
        printf("\nIntroduce un número: ");
        scanf("%f", &temperatura);
        if(temperatura > 2.5 && temperatura < 38.7)
            puts("Los parámetros de medición son normales.");
    } while(temperatura > 2.5 && temperatura < 38.7);

    puts("ALERTA");

    return 0;
}