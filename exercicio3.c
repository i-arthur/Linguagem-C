#include <stdio.h>

#define TAMANHO 100  // Definindo o tamanho da lista

int main() {
    // Lista de números de contas já ordenados
    int contasAtivas[TAMANHO] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
        51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
        71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
        91, 92, 93, 94, 95, 96, 97, 98, 99, 100
    };
    
    int conta_procurada;
    int inicio = 0;
    int fim = TAMANHO - 1;
    int meio;
    int comparacoes = 0;
    int encontrado = 0;

    printf("Digite o numero da conta que deseja buscar: ");
    scanf("%d", &conta_procurada);

    while (inicio <= fim) {
        comparacoes++;
        meio = (inicio + fim) / 2;

        if (contasAtivas[meio] == conta_procurada) {
            printf("Conta %d encontrada na posicao %d.\n", conta_procurada, meio);
            encontrado = 1;
            break; 
        }

        else if (contasAtivas[meio] > conta_procurada) {
            fim = meio - 1;
        }

        else {
            inicio = meio + 1;
        }
    }

    if (!encontrado) {
        printf("Conta %d nao encontrada.\n", conta_procurada);
    }

    printf("Numero de comparacoes realizadas: %d\n", comparacoes);

    return 0;
}
