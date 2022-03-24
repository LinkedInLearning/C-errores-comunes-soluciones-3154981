/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    float temperaturasIslaOahu[8] = {4.8, 15.1, 6.2, 3.4, 42.4, 16, 23.1, 42.8};

    for(int i=0;i<8;i++){
        printf("Temperatura %d en Grados Celsius: %.2f\n", i+1, temperaturasIslaOahu[i]);
        printf("Temperatura %d en Grados Fahrenheit: %.2f\n", i+1, temperaturasIslaOahu[i]*(9.0/5.0)+32);
        puts("==============================================");
    }

    return 0;
}