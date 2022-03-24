/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

float calcularSueldoNeto();

int main(){

    printf("El salario neto: %.2f\n",calcularSueldoNeto());

    return 0;
}

float calcularSueldoNeto(){

    int horasMensualesTrabajadas;
    float sueldoBruto, sueldoNeto, porcentajeDeRetencion, retencionEnEuros, precioHora;

    printf("Introduce el número de horas mensuales trabajadas: ");
    scanf("%d",&horasMensualesTrabajadas);
    printf("Introduce la tarifa horaria: ");
    scanf("%f",&precioHora);
    printf("Introduce la retención: ");
    scanf("%f",&porcentajeDeRetencion);
    
    sueldoBruto = horasMensualesTrabajadas*precioHora;
    retencionEnEuros = sueldoBruto * (porcentajeDeRetencion/100);
    sueldoNeto = sueldoBruto - retencionEnEuros;

    return sueldoNeto;
}