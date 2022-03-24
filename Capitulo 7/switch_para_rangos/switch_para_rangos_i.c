/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    int nota;

    printf("Introduce la nota que has obtenido en tu examen: ");
    scanf("%d", &nota);

    switch(nota){
        case 0: puts("Tu examen está suspenso :("); break;
        case 1: puts("Tu examen está suspenso :("); break;
        case 2: puts("Tu examen está suspenso :("); break;
        case 3: puts("Tu examen está suspenso :("); break;
        case 4: puts("¡Casi apruebas! Estudia más la próxima vez"); break;
        case 5: puts("¡Aprobaste!"); break;
        case 6: puts("¡Aprobaste!"); break;
        case 7: puts("¡Muy bien! Obtuviste un notable"); break;
        case 8: puts("¡Muy bien! Obtuviste un notable"); break;
        case 9: puts("¡Fantástico! Obtuviste un sobresaliente"); break;
        case 10: puts("¡Magnífico trabajo! Has obtenido una MATRÍCULA DE HONOR"); break;
        default: puts("Puntuación no contemplada.");
    }

    return 0;
}