/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    int numeroDeTranseuntesPorDia = 30000;
    int numeroDeTranseuntesPorAnio = numeroDeTranseuntesPorDia * 365;
    int numeroDeTranseuntesPorDecada = numeroDeTranseuntesPorAnio * 10;
    int numeroDeTranseuntesPorSiglo = numeroDeTranseuntesPorDecada * 100;

    printf("Número de transeuntes en Puerta del Sol por día: %d personas\n", numeroDeTranseuntesPorDia);
    printf("Número de transeuntes en Puerta del Sol por año: %d personas\n", numeroDeTranseuntesPorAnio);
    printf("Número de transeuntes en Puerta del Sol por década: %d personas\n", numeroDeTranseuntesPorDecada);
    printf("Número de transeuntes en Puerta del Sol por siglo: %d personas\n", numeroDeTranseuntesPorSiglo);

    return 0;
}