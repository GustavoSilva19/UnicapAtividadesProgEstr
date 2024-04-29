// Gustavo Igor da Silva - 00000851759

#include <stdio.h>


int buscaBin(int vetor[], int tamanho, int valor, int *iteracoes) {
    int inicio = 0, fim = tamanho - 1, meio;
    *iteracoes = 0; 

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        (*iteracoes)++; 

        if (vetor[meio] == valor) {
            return meio; 
        } else if (vetor[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1; 
}

int main() {
    int vetor[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valor = 13;
    int iteracoes;

    int posicao = buscaBin(vetor, tamanho, valor, &iteracoes);

    if (posicao != -1) {
        printf("Valor encontrado na posicao %d.\n", posicao);
    } else {
        printf("Valor nao encontrado.\n");
    }

    printf("Número de iteracoes: %d\n", iteracoes);

    return 0;
}