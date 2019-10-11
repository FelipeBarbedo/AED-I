#include <stdio.h>

void selectSort(int vetor[], int n);

int main() {

    int vetor[] = {5, 2, 3, 1, 4, 7, 6};

    selectSort(vetor[], 7);

    return 0;
}

void selectSort(int vetor[], int n) {

    int i, j, min_id, tmp;

    for(i = 0; i < n - 1; i++) {
        min_id = i;
        for(j = i + 1; j < n; j++) {
            if(vetor[j] < vetor[min_id]) {
                min_id = j;
            }
        }
        if(i != min_id)
            tmp = vetor[i];
            vetor[i] = vetor[min_id];
            vetor[min_id] = tmp; 
        }
    }
}