#include <stdio.h>

void bubbleSort(int vetor[], int n);

int main() {

    int vetor[] = {5, 2, 3, 1, 4, 7, 6};

    bubbleSort(vetor[], 7);

    return 0;
}

void bubbleSort(int vetor[], int n) {

    int tmp, i, j;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(vetor[j] > vetor[j + 1]) {
                tmp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = tmp;
            }
        }
    }
}