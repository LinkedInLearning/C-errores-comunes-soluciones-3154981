/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    int i = 1, j=0;

    while(i < 100){
        j = j + i;
        i++;
        printf(".");
    }

    return 0;
}