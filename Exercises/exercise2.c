#include <stdio.h>
#include <stdlib.h>

int *cria(int n);

void imprime(int *vetor, int n);

void limpa(int *vetor);

int main() {

	int *vetor, *ini, n, i;

	scanf("%d", &n);
	vetor = cria(n);
	ini = vetor;
	for(i = 0; i < n; i++) {
		scanf("%d", vetor);
		vetor++;
	}
	vetor = ini;
	imprime(vetor, n);
	limpa(vetor);

	return 0;
}

int *cria(int n) {

	int *vetor;

	vetor = (int *) malloc(sizeof(int) * n);

	return vetor;
}

void imprime(int *vetor, int n) {

	int i;

	for(i = 0; i < n; i++) {
		printf("%d ", *vetor);
		vetor++;
	}
	printf("\n");
}

void limpa(int *vetor) {

	free(vetor);
}