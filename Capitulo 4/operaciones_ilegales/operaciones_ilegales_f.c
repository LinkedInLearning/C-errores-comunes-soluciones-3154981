/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){
    
    float temperaturasIslaOahu[8] = {4.8, 15.1, 6.2, 3.4, 16.4, 16, 23.1, 12.8};

    for(int i=0;i<8;i++){
         temperaturasIslaOahu[i] = temperaturasIslaOahu[i] * 2;
        printf("Temperatura %d: %.2f\n", i+1, temperaturasIslaOahu[i]);
    }
    
    return 0;
}