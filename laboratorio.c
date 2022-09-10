#include <stdio.h>
#include <stdlib.h>
int main() {
    int sapo, rato, coelho, soma, total, entrada;
    char caractere, p;
    p = '%';
    sapo = 0;
    rato = 0;
    coelho = 0;
    soma = 0;
    printf("Digite quantas entradas vai fazer: ");
    scanf("%d", &entrada);
    while (entrada--)
    {
        scanf("%d %c", &total, &caractere);
        soma += total;
    if (caractere == 'C')
    {
        coelho += total;
    }
    if (caractere == 'S')
    {
        sapo += total;
    }
    if (caractere == 'R')
    {
        rato += total;
    }
    }
    printf("Total: %d cobaias\n", soma);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %c\n", (float)coelho*100.0/soma, p);
    printf("Percentual de ratos: %.2f %c\n", (float)rato*100.0/soma, p);
    printf("Percentual de sapos: %.2f %c", (float)sapo*100.0/soma, p);
    
}