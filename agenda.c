#include <stdio.h>
#include <stdlib.h>

struct spa {

    char *nome;
    int numero;
    struct spa *next;

};

typedef struct spa space;

space *begin();
void add(space *first);
void print(space *second);

int main() {

    space *second;

    printf("Teste");
    second = begin();
    add(second);
    print(second);
    add(second);
    print(second);

    return 0;
}

space *begin() {

    space *start;

    start = (space *) malloc(sizeof(space));
    start->next = NULL;
    return start;

}

void add(space *first) {

    space *new;
    char *nome;
    char vetor[100];
    int numero;


    nome = &vetor[0];
    printf("\nDigite o nome: ");
    fgets(vetor, 100, stdin);
    printf("\nDigite o telefone: ");
    scanf("%d", &numero);
    new = (space *) malloc(sizeof(space));
    new->nome = nome;
    new->numero = numero;
    new->next = NULL;
    first->next = new;  

}

void print(space *second) {

    space *first;

    for(first = second->next; first != NULL; first = first->next) {
        printf("\nNome: %s", first->nome);
        printf("\nNumero: %d", first->numero);

    }

}