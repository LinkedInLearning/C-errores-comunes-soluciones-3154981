/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

float calcularSueldoNeto(int, float, float);

int solicitarNumeroDeHorasMensualesTrabajadas(){
    int horasMensualesTrabajadas;
    printf("Introduce el número de horas mensuales trabajadas: ");
    scanf("%d",&horasMensualesTrabajadas);
    return horasMensualesTrabajadas;
}

float solicitarTarifaHoraria(){
    float precioHora;
    printf("Introduce la tarifa horaria: ");
    scanf("%f",&precioHora);
    return precioHora;
}

float solicitarRetencion(){
    float porcentajeDeRetencion;
    printf("Introduce la retención: ");
    scanf("%f",&porcentajeDeRetencion);
    return porcentajeDeRetencion;
}
    
int main(){

    int horasMensualesTrabajadas;
    float precioHora, porcentajeDeRetencion;

    horasMensualesTrabajadas = solicitarNumeroDeHorasMensualesTrabajadas();
    precioHora = solicitarTarifaHoraria();
    porcentajeDeRetencion = solicitarRetencion();

    printf("El salario neto: %.2f\n",calcularSueldoNeto(horasMensualesTrabajadas, precioHora, porcentajeDeRetencion));

    return 0;
}

float calcularSueldoNeto(int horasMensualesTrabajadas, float precioHora, float porcentajeDeRetencion){

    float sueldoBruto, sueldoNeto, retencionEnEuros;
    
    sueldoBruto = horasMensualesTrabajadas*precioHora;
    retencionEnEuros = sueldoBruto * (porcentajeDeRetencion/100);
    sueldoNeto = sueldoBruto - retencionEnEuros;

    return sueldoNeto;
}