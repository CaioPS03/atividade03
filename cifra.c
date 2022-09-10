#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, movimentos = 0, entradas = 0, aux = 0;
    char cifra[50];
    printf("Digite o numero de entradas: ");
    scanf("%d", &entradas);

    while(entradas--){
        scanf("%s", cifra);
        scanf("%d", &movimentos);
        for (i = 0; i < 50; i++){
            if (cifra[i] == '\0')
                break;
            if ((cifra[i] - movimentos) < 65)
                aux = (cifra[i] - movimentos) + 26;
            else
                aux = cifra[i] - movimentos;
        printf("%c", aux);
        }
    }
    
    return 0;
}