#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int qtd_criancas = 50;
    int notamin = 1;
    int notamax = 5;
    int notas[50];
    int contagemDnotas[5];

    srand(time(NULL));

    for (int i = 0; i < qtd_criancas; i++){
        notas[i] = (rand() % notamax) + notamin;
    }

    for (int i = 0; i < qtd_criancas; i++) {
        contagemDnotas[notas[i] - 1]++; 
    }

    for (int i = 0; i < notamax; i++) {
        printf("Nota %d: %d vezes\n", i + 1, contagemDnotas[i]);
    }

    return 0;
}
