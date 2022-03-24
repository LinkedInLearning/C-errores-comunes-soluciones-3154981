/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    char sopaDeLetras[8][8] = {{'L','X','O','B','X','S','A','E'},
                               {'M','I','C','R','O','Y','U','R'},
                               {'A','R','N','D','Q','T','E','R'},
                               {'S','F','D','K','S','Z','L','O'},
                               {'D','M','A','X','E','B','H','R'},
                               {'F','O','T','I','F','D','O','W'},
                               {'V','G','L','E','T','N','I','J'},
                               {'L','E','Y','E','N','D','A','N'}};
    
    for(int i = 0; i<=8; i++){
        for(int j = 0; j<=8; j++){
            printf(" %c ", sopaDeLetras[i][j]);
        }
        printf("\n");
    }

    return 0;
}