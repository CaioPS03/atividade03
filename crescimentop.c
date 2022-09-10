#include <stdio.h>
#include <stdlib.h>
 
int main() {

    int t, n, pa, pb, anos;
    float g1, g2;
    printf("Digite quantas entradas vai fazer: ");
    scanf("%d", &t);
    for (n = 1; n <= t; n++)
    {
        anos = 0;
        scanf("%d %d %f %f", &pa, &pb, &g1, &g2);
        while (pa <= pb)
        {
            pa *= (g1/100.0) + 1.0;
            pb *= (g2/100.0) + 1.0;
            anos++;
            if (anos > 100)
            {
                printf("Mais de um século");
                break;
            }
        }
        if (anos <= 100)
            printf("%d anos.", anos);
        
    }
    return 0;
}