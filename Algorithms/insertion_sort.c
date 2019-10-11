#include <stdio.h>

void insertionSort(int vetor[], int n);

int main() {

    int vetor[] = {5, 2, 3, 1, 4, 7, 6};

    insertionSort(vetor[], 7);
    
    return 0;
}

void insertionSort(int vetor[], int n) {
    
    int i, j, key;

    for(i = 1; i < n; i++) {
        key = vetor[i];
        j = i - 1;
        while(j > -1 && vetor[j] > key) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = key;
    }
} 