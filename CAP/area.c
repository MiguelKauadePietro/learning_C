#include <stdio.h>
#include <math.h>
#define pi 3.14159


int main(){
    float a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%f %f %f", &a, &b, &c);

    triangulo = (a * c) / 2;
    circulo = pi * (c * c);
    trapezio = ((a + b) * c) / 2;
    quadrado = b * b;
    retangulo = a * b;

    printf("TRIANGULO: %.3f", triangulo);
    printf("\nCIRCULO: %.3f", circulo);
    printf("\nTRAPEZIO: %.3f", trapezio);
    printf("\nQUADRADO: %.3f", quadrado);
    printf("\nRETANGULO: %.3f\n", retangulo);

    return 0;
}