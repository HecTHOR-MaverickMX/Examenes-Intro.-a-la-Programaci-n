#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// vamos a crear un programa que determine el tipo de triangulo dado por sus 3 lasdos ingresados por el usuario
// el programa va a solicitarle al usuario los lados del triangulo y va a determinar si es equilatero, isoceles o escaleno

int main() { 
    setlocale(LC_CTYPE, "Spanish");

    int lado1, lado2, lado3;
    
    
    printf("ingrese el lado 1 del triangulo: ");
    scanf("%d" , &lado1);

    printf("ingrese el lado 2 del triangulo: ");
    scanf("%d", &lado2);

    printf("ingrese el lado 3 del triangulo: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("El triangulo es equilatero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("El triangulo es isoceles\n");
    } else {
        printf("El triangulo es escaleno\n");
    }
   
    system("pause");

    return 0;
}
