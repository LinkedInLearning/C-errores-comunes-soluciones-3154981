/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

float calcularPago(float numKilometros);

int main(){

    float numKilometros;
    puts("\n¡Hola! Este programa calcula la cantidad que se abona en concepto de desplazamiento, según el número de kilómetros realizados.");
    printf("\nPor favor, introduce el número de kilómetros que has recorrido en coche: ");
    scanf("%f", &numKilometros);
    getchar();
    printf("Se realizará un pago de %.2f euros.", calcularPago(numKilometros));

    return 0;
}

float calcularPago(float numKilometros){
    return (0.20 * numKilometros);
}