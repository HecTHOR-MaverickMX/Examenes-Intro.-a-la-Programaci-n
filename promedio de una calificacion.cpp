#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <iostream>

// vamos a calcular el promedio de una calificacion
// el programa va a solicitarle al usuario la calificacion y va a calcular el promedio de la calificacion
// el programa imprimira el promedio de la calificacion mas el nombre de la materia que seran 5 materias
// el programa va a solicitarle al usuario el nombre de la materia y la calificacion

int main () {

    setlocale(LC_CTYPE, "Spanish");

    int materia1, materia2, materia3, materia4, materia5;
    char materia1nombre[20], materia2nombre[20], materia3nombre[20], materia4nombre[20], materia5nombre[20];
    float promedio;

    printf("Ingrese el nombre de la materia 1: ");
    scanf("%s", materia1nombre);
    printf("Ingrese la calificacion de la materia 1: ");
    scanf("%d", &materia1);

    printf("Ingrese el nombre de la materia 2: ");
    scanf("%s", materia2nombre);
    printf("Ingrese la calificacion de la materia 2: ");
    scanf("%d", &materia2); 

    printf("Ingrese el nombre de la materia 3: ");
    scanf("%s", materia3nombre);
    printf("Ingrese la calificacion de la materia 3: ");
    scanf("%d", &materia3);

    printf("Ingrese el nombre de la materia 4: "); 
    scanf("%s", materia4nombre);
    printf("Ingrese la calificacion de la materia 4: ");
    scanf("%d", &materia4);
    
    printf("Ingrese el nombre de la materia 5: ");
    scanf("%s", materia5nombre);
    printf("Ingrese la calificacion de la materia 5: ");
    scanf("%d", &materia5);

    promedio = (materia1 + materia2 + materia3 + materia4 + materia5) / 5;

    printf("El promedio de la calificacion es: %.2f\n", promedio);

    

    return 0;

}