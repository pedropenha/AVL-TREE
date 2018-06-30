#include <stdio.h>
#include <stdlib.h>

struct avl{
    int n, fb;

    struct avl *esquerda;
    struct avl *direita;
    struct avl *pai;
};

struct avl *raiz = NULL;

void menu();
void inserir();
void remover();
void buscar();
void ordem();
void pre_ordem();
void pos_ordem();
void predecessor();
void sucessor();

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
    puts("Inserido");
}
