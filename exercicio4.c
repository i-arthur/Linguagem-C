#include <stdio.h>

#define TAMANHO 25

int main() {
    int primos[TAMANHO] = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
        73, 79, 83, 89, 97
    };
    
    int valor_procurado;
    int inicio = 0;
    int fim = TAMANHO - 1;
    int meio;
    int encontrado = 0;

    printf("Digite um numero entre 1 a 100 para ser buscado: ");
    scanf("%d", &valor_procurado);

    if (valor_procurado < 1 || valor_procurado > 100) {
        printf("O numero digitado nao e permitido.\n");
        return 1;
    }

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (primos[meio] == valor_procurado) {
            printf("O numero %d foi encontrado na posicao %d.\n", valor_procurado, meio + 1);
            encontrado = 1;
            break;
        }

        else if (primos[meio] > valor_procurado) {
            fim = meio - 1;
        }

        else {
            inicio = meio + 1;
        }
    }

    if (!encontrado) {
        printf("O numero %d nao foi encontrado na lista.\n", valor_procurado);
    }

    return 0;
}
