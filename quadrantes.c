#include <stdio.h>

int main()
{
    float x, y;
    printf("Digite as coordenadas: ");
    scanf("%f %f", &x, &y);
    
    if(x == 0 && y == 0) {
        printf("O ponto está na Origem");
    }
    else if(x > 0 && y > 0) {
        printf("Quadrante Q1");
    }
    else if(x < 0 && y > 0) {
        printf("Quadrante Q2");
    }
    else if(x < 0 && y < 0) {
        printf("Quadrante Q3");
    }
    else if(x > 0 && y < 0) {
        printf("Quadrante Q4");
    }
    else if(x == 0) {
        printf("O ponto está no eixo Y");
    }
    else if(y == 0) {
        printf("O ponto está no eixo X");
    }

    return 0;
}
