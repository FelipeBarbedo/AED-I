#include <stdio.h>
#include <stdlib.h>

struct spa {
	void *number;
	struct spa *next;
};

typedef struct spa space;

space *begin();

void addInt(space *buffer);

void addFloat(space *buffer);

void addDouble(space *buffer);

void printS(space *buffer, int *vetor);

void printO(space *buffer, int *vetor);

space *libera(space *buffer);

int main() {

	int n = 0, i = 0, *vetor;
	space *buffer = NULL;
	space *cBuffer = NULL;

	buffer = begin();
	cBuffer = buffer;
	while(n != 4) {
		printf("Escolha sua entrada: \n");
		printf("1 - int.\n");
		printf("2 - float.\n");
		printf("3 - double.\n");
		printf("4 - fim.\n");
		scanf("%d", &n);
		vetor[i] = n;
		switch(n) {
			case 1: 
				addInt(buffer);
				buffer = buffer->next;
				break;
			case 2:
				addFloat(buffer);
				buffer = buffer->next;
				break;
			case 3:
				addDouble(buffer);
				buffer = buffer->next;
				break;
		}
		i++;
	}
	printS(cBuffer, vetor);
	printO(cBuffer, vetor);
	printf("\n");
	cBuffer = libera(cBuffer);
	buffer = libera(buffer);
}


space *begin() {

	space *buffer = NULL;

	buffer = (space *) malloc(sizeof(space));
	buffer->next = NULL;

	return buffer;
}

void addInt(space *buffer) {

	int *inter;
	space *pBuffer = NULL;

	inter = (int *) malloc(sizeof(int)); 
	scanf("%d", inter);
	buffer->number = inter;
	pBuffer = (space *) malloc(sizeof(space));
	buffer->next = pBuffer;
	pBuffer->next = NULL;
}

void addFloat(space *buffer) {

	float *inter;
	space *pBuffer = NULL;

	inter = (float *) malloc(sizeof(float));
	scanf("%f", inter);
	buffer->number = inter;
	pBuffer = (space *) malloc(sizeof(space));
	buffer->next = pBuffer;
	pBuffer->next = NULL;
}

void addDouble(space *buffer) {

	double *inter;
	space *pBuffer = NULL;

	inter = (double *) malloc(sizeof(double)); 
	scanf("%lf", inter);
	buffer->number = inter;
	pBuffer = (space *) malloc(sizeof(space));
	buffer->next = pBuffer;
	pBuffer->next = NULL;
}

void printS(space *buffer, int *vetor) {

	int i = 0;
	int *interInt;
	float *interFloat;
	double *interDouble;

	printf("Valores em sequência: ");
	if(buffer) {
	 	do {
			if(vetor[i] == 1) {
				interInt = buffer->number;
				printf("%d ", *interInt);
			}
			if(vetor[i] == 2) {
				interFloat = buffer->number;
				printf("%f ", *interFloat);
			}
			if(vetor[i] == 3) {
				interDouble = buffer->number;
				printf("%lf ", interDouble);
			}
			i++;
			buffer = buffer->next;
		} while(buffer);
	}
	printf("\n");
}

void printO(space *buffer, int *vetor) {

	int *interInt, i = 0;
	float *interFloat;
	double *interDouble;
	space *aux = NULL;

	printf("Valores em ordem(int/float/double):");
	aux = buffer;
	if(buffer) {
		while(vetor[i] != 4) {
			if(vetor[i] == 1) {
				interInt = buffer->number;
				printf("%d ", *interInt);
			}
			buffer = buffer->next;
			i++;
		}
		buffer = aux;
		i = 0;
		while(vetor[i] != 4) {
			if(vetor[i] == 2) {
				interFloat = buffer->number;
				printf("%f ", *interFloat);
			}
			buffer = buffer->next;
			i++;
		}
		buffer = aux;
		i = 0;
		while(vetor[i] != 4) {
			if(vetor[i] == 3) { 
				interDouble = buffer->number;
				printf("%lf ", interDouble);
			}
			buffer = buffer->next;
			i++;
		}
	}
	printf("\n");
}

space *libera(space *buffer) {

	do {
		free(buffer);
		buffer = buffer->next;
	} while(buffer);

	return buffer;
}
