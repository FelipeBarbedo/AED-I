#include <stdio.h>

void quickSort(int vetor[], int left, int right);

int main() {

    int vetor[] = {5, 2, 3, 1, 4, 7, 6};

    quickSort(vetor, 0, 7);

    return 0;
}

void quickSort(int vetor[], int left, int right) {

    int mid, tmp, i, j;

    i = left;
    j = right;
    mid = vetor[(left + right) / 2];
    do {
        while(vetor[i] < mid)
            i++;
        while(mid < data[j])
            j--;
        if(i <= j) {
            tmp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = tmp;
            i++;
            j--;   
        }
    } while(i <= j);
    if(left < j)
        quickSort(vetor, left, j);
    if(i < right)
        quickSort(vetor, i right);
}

