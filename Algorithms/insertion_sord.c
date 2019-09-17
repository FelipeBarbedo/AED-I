#include <stdio.h>

int main() {

    int i, j, key, vetor[] = {5, 2, 3, 1, 4, 7, 6};

    for(i = 1; i < 7; i++) {
        key = vetor[i];
        j = i - 1;
        while(j > -1 && vetor[j] > key) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = key;
    }
}