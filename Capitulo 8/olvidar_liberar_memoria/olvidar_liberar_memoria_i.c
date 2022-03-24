/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeroDeTemperaturas = 1, contador=0;
    float temperatura, total=0;
    float *temperaturas =(float*)malloc(numeroDeTemperaturas*sizeof(float));

    if(temperaturas != NULL){
        while(contador <100 || temperatura >= 0){
            printf("\nInserta la temperatura: ");
            scanf("%f", &temperatura);
            temperaturas[contador] = temperatura;
            total += temperatura;
            contador++;
            printf("La temperatura promedio actual es: %.2f\n", (total/contador));
            if(contador==numeroDeTemperaturas){
                numeroDeTemperaturas++;
                temperaturas = realloc(temperaturas, numeroDeTemperaturas*sizeof(float));
            }
            for(int i=0;i<contador;i++){
                printf("%.2f ", temperaturas[i]);
            }
        }
    } else {
        puts("Error: no hay suficiente memoria disponible.");
    }
    return 0;
}