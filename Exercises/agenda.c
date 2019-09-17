#include <stdio.h>
#include <stdlib.h>

struct spa {
    char name[50];
    char email[50];
    struct spa *next;
};

typedef struct spa space;

void *begin();

void add(space *agenda);

int main() {

    void *pBuffer;
    void *ini;
    int A;
    space *agenda = NULL;
 
    agenda = begin();
    pBuffer = agenda;
    ini = pBuffer;
    printf("Menu: \n");
    printf("1 - Add; \n");
    scanf("%d", &A);
    getchar();

    switch(A) {
        case 1:
            add(agenda);
            agenda = agenda->next;
            break;
    }

    return 0;
}

void *begin() {

    space *first = NULL;

    first = (space *) malloc(sizeof(space));
    first->next = NULL;

    return first;
}

void add(space *agenda) {

    space *inter;

    scanf("%[^\n]", agenda->name);
    getchar();
    scanf("%[^\n]", agenda->email);
    inter = begin();
    agenda->next = inter;
}