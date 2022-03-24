/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    float temperaturas[6] = {4, 8, 15, 16, 23, 42};

    for(int i=0; i<6; i++){
        printf("\n- Temperatura %d: %.2f", i+1, temperaturas[i]);
    }

    return 0;
}