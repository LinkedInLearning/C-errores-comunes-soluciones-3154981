/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeroDeTemperaturas = 100, contador=0;
    float temperatura, total=0;
    float *temperaturas =(float*)calloc(numeroDeTemperaturas,numeroDeTemperaturas*sizeof(float));
    
    while(contador < 100 || temperatura >= 0){
        printf("\nInserta la temperatura: ");
        scanf("%f", &temperatura);
        temperaturas[contador] = temperatura;
        total += temperatura;
        contador++;
        printf("\nLa temperatura promedio actual es: %.2f\n", (total/contador));
        
        for(int i=0;i<contador;i++){
            printf("%.2f ", temperaturas[i]);
        }

        puts("\n\n=========================================");
    }

    return 0;
}