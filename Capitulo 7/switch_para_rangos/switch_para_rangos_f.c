/*
 * Curso "C: Errores comunes y como solucionarlos"
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    float nota;

    printf("Introduce la nota que has obtenido en tu examen: ");
    scanf("%f", &nota);

    if (nota >= 0 && nota <= 4) puts("Tu examen está suspenso :(");
    else if(nota > 4 && nota < 5) puts("¡Casi apruebas! Estudia más la próxima vez");
    else if(nota >= 5 && nota < 7) puts("¡Aprobaste!");
    else if(nota >= 7 && nota < 9) puts("¡Muy bien! Obtuviste un notable");
    else if (nota >= 9 && nota < 10) puts("¡Fantástico! Obtuviste un sobresaliente");
    else if (nota == 10) puts("¡Magnífico trabajo! Has obtenido una MATRÍCULA DE HONOR");
    else puts("Puntuación no contemplada.");
    
    return 0;
}