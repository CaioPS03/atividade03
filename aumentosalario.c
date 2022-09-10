#include <stdio.h>

int main()
{
    float salario, valor, percentual;
    char p;
    p = '%';
    printf("Digite o salário: ");
    scanf("%f", &salario);
    if(salario <= 400) {
        percentual = 0.15;
        valor = salario * percentual;
        salario += valor;
        percentual *= 100;
        printf("Novo salário: %.2f\nReajuste ganho: %.2f\nPercentual: %.2f %c", salario, valor, percentual, p);
    }
    else if(salario > 400 && salario <= 800) {
        percentual = 0.12;
        valor = salario * percentual;
        salario += valor;
        percentual *= 100;
        printf("Novo salário: %.2f\nReajuste ganho: %.2f\nPercentual: %.2f %c", salario, valor, percentual, p);
    }
    else if(salario > 800 && salario <= 1200) {
        percentual = 0.10;
        valor = salario * percentual;
        salario += valor;
        percentual *= 100;
        printf("Novo salário: %.2f\nReajuste ganho: %.2f\nPercentual: %.2f %c", salario, valor, percentual, p);
    }
    else if(salario > 1200 && salario <= 2000) {
        percentual = 0.07;
        valor = salario * percentual;
        salario += valor;
        percentual *= 100;
        printf("Novo salário: %.2f\nReajuste ganho: %.2f\nPercentual: %.2f %c", salario, valor, percentual, p);
    }
    else if(salario > 2000) {
        percentual = 0.04;
        valor = salario * percentual;
        salario += valor;
        percentual *= 100;
        printf("Novo salário: %.2f\nReajuste ganho: %.2f\nPercentual: %.2f %c", salario, valor, percentual, p);
    }
    
    return 0;
}
