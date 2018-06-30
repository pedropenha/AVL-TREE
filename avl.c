#include <stdio.h>
#include <stdlib.h>
#define TAM 50

struct No{
    int dado;
    int bal;
    struct No *esquerda;
    struct No *direita;
    struct No *pai;
};

struct No *raiz = NULL;
void pre_ordem(struct No *ptr);


void menu();
void inserir();
struct No* Aloca(int n);
void pos_ordem(struct No *ptr);
void ordem(struct No *ptr);
struct No* buscar(struct No *ptr, int n);
struct No* minimo(struct No *ptr);
struct No* maximo(struct No *ptr);
struct No* sucessor(struct No *ptr);


int main(){
    menu();
}

void menu(){
    int op;

    do {
        printf("-----------------------------\n");
        printf("Entre com um numero:\n");
        printf("1 - Inserir palavra\n");
        printf("2 - Remover palavra\n");
        printf("3 - Buscar palavra\n");
        printf("4 - Percurso em Ordem\n");
        printf("5 - Percurso em Pre-ordem\n");
        printf("6 - Percurso em Pos-ordem\n");
        printf("7 - Predecessor\n");
        printf("8 - Sucessor\n");
        printf("0 - Sair\n");
        printf("-----------------------------\n");

        scanf("%d", &op);

        switch (op) {
            case 1:
                inserir();
                break;
            case 2:
                inserir();
                break;
            case 3:
                inserir();
                break;
            case 4:
                inserir();
                break;
            case 5:
                inserir();
                break;
            case 6:
                inserir();
                break;
            case 7:
                inserir();
                break;
            case 8:
                inserir();
                break;
            default:
                break;
        }
    }while (op != 0);
}

void inserir(){

}

struct No* Aloca(int n){
    struct No *elemento;

    elemento->dado = n;
    elemento->pai = NULL;
    elemento->esquerda = NULL;
    elemento->direita = NULL;

    return elemento;
}

void pre_ordem(struct No *ptr){
    if(ptr != NULL){
        printf("%d", ptr->dado);
        pre_ordem(ptr->esquerda);
        pre_ordem(ptr->direita);
    }
}

void pos_ordem(struct No *ptr){
    if(ptr != NULL){
        pos_ordem(ptr->esquerda);
        pos_ordem(ptr->direita);
        printf("%d", ptr->dado);
    }
}

void ordem(struct No *ptr){
    if(ptr != NULL){
        ordem(ptr->esquerda);
        printf("%d", ptr->dado);
        ordem(ptr->direita);
    }
}

struct No* buscar(struct No *ptr, int n){
    if(ptr == NULL || n == ptr->dado)
        return ptr;
    if(n < ptr->dado)
        return buscar(ptr->esquerda, n);
    else
        return buscar(ptr->direita, n);
}

struct No* minimo(struct No *ptr){

    while (ptr->esquerda != NULL){
        ptr = ptr->esquerda;
    }

    return ptr;
}

struct No* maximo(struct No *ptr){

    while (ptr->direita != NULL){
        ptr = ptr->direita;
    }

    return ptr;
}

struct No* sucessor(struct No *ptr){
    struct No *aux;

    if(ptr->direita != NULL)
        return minimo(ptr->direita);

    aux = ptr->pai;

    while (aux != NULL && ptr == aux->direita){
        ptr = aux;
        aux = aux->pai;
    }

    return aux;
}