/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int solicitarDocumentoNacionalDeIdentidad();
char calcularLetraDNI(int);
void mostrarDNICompletoEnPantalla(int, char);

int main(){

    // Formato DNI: 00000000A
    int numeroDNI = solicitarDocumentoNacionalDeIdentidad();
    char letraDNI = calcularLetraDNI(numeroDNI);
    mostrarDNICompletoEnPantalla(numeroDNI, letraDNI);

    return 0;
}

int solicitarDocumentoNacionalDeIdentidad(){
    int numero;
    printf("Introduce el numero de tu DNI (Documento Nacional De Identidad): ");
    scanf("%d",&numero);
    getchar();
    return numero;
}

char calcularLetraDNI(int numeroDNI){
    char letrasDNI[]={'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};
    return letrasDNI[numeroDNI%23];
}

void mostrarDNICompletoEnPantalla(int numeroDNI, char letraDNI){
    printf("%d%c", numeroDNI, letraDNI);
}