/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int buscarPosicionDe(char caracter,char texto[]);

int main(){
    
    int texto = "LinkedIn";
    printf("%d", buscarPosicionDe('k',texto));

    return 0;
}

int buscarPosicionDe(char caracter,char texto[]){

    int posicion = 0;

    while(texto[posicion] != '\0' && texto[posicion]!=caracter){
        posicion++;
    }
    if (texto[posicion] == '\0') posicion = -1;
    
    return posicion;
}