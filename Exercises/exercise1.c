#include <stdio.h>
#include <stdlib.h>

void add(double *vet, int e);

int main() {
	
	int n, i;
	double *vetor, *ini;

	scanf("%d", &n);
	vetor = (double *) malloc(sizeof(double) * n);
	ini = vetor;
	add(vetor, n);
	for(i = 0; i < n; i++) {
		printf("%.0lf ", *vetor);
		vetor++;
	}
	printf("\n");
	vetor = ini;
	free(vetor);

	return 0;
}

void add(double *vet, int e) {

	int i;
	double *ini;

	ini = vet;
	for(i = 0; i < e; i++) {
		scanf("%lf", vet);
		vet++;
	}
	vet = ini;
}