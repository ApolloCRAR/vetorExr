#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i;
    int vetor[5] = {0};

    printf("Digite um numero entre 0 e 99999: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 99999)
    {
        printf("Numero invalido\n");
        return 1;
    }

    for (i = 4; i >= 0; i--)
    {
        vetor[i] = numero % 10;
        numero /= 10;
    }

    printf("Vetor: {%d, %d, %d, %d, %d}\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);

    return 0;
}
