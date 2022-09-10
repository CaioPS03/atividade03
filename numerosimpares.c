#include <stdio.h>

int main() {
    int numero, n = 0;
    scanf("%d", &numero);
    
    if (numero % 2 == 0)
        numero++;

    while (n < 6) {
        printf("%i\n", numero);
        n++;
        numero += 2;
    }
    
    return 0;
}