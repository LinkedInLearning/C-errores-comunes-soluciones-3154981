/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    int horasMensualesTrabajadas;
    float salarioBruto, salarioNeto, porcentajeDeRetencion, retencionEnEuros, precioHora;

    printf("Introduce el número de horas semanales trabajadas: ");
    scanf("%d",&horasMensualesTrabajadas);
    printf("Introduce la tarifa horaria: ");
    scanf("%f",&precioHora);
    printf("Introduce la retención: ");
    scanf(" %f",&porcentajeDeRetencion);
    
    salarioBruto = horasMensualesTrabajadas * precioHora;
    retencionEnEuros = salarioBruto * ( porcentajeDeRetencion / 100 );
    salarioNeto = salarioBruto - retencionEnEuros;
    
    printf("El salario bruto es %.2f\n",salarioBruto);
    printf("El salario neto: %.2f\n",salarioNeto);

    return 0;
}