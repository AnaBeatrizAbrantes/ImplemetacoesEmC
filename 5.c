#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numero;
    int tamanhoKB;
    int tempoEstimado;
} Pacote; // struct pacote


typedef struct NoFila {
    Pacote dado;
    struct NoFila *prox;
} NoFila; // NóFila

typedef struct {
    NoFila *inicio; // puxa a struct noFila para inicio e fim
    NoFila *fim;
} Fila;

void inicializarFila(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

int filaVazia(Fila *f) {
    return f->inicio == NULL;
}

void enfileirar(Fila *f, Pacote p) {
    NoFila *novo = (NoFila *)malloc(sizeof(NoFila));
    if (novo == NULL) {
        printf("Erro memoria vazia.\n");
        return;
    }

    novo->dado = p;
    novo->prox = NULL;

    if (filaVazia(f)) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }
}

int desenfileirar(Fila *f, Pacote *p) {
    if (filaVazia(f)) {
        return 0;
    }

    NoFila *aux = f->inicio;
    *p = aux->dado;
    f->inicio = aux->prox;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(aux);
    return 1;
}

void mostrarFila(Fila *f) {
    NoFila *aux = f->inicio;

    if (filaVazia(f)) {
        printf("Fila vazia.\n");
        return;
    }

    printf("Fila de espera:\n");
    while (aux != NULL) {
        printf("Pacote %d | %d KB | %d ms\n",
               aux->dado.numero,
               aux->dado.tamanhoKB,
               aux->dado.tempoEstimado);
        aux = aux->prox;
    }
}

typedef struct NoPilha {
    Pacote dado;
    struct NoPilha *prox;
} NoPilha;

typedef struct {
    NoPilha *topo;
} Pilha;

void inicializarPilha(Pilha *p) {
    p->topo = NULL;
}

int pilhaVazia(Pilha *p) {
    return p->topo == NULL;
}

void empilhar(Pilha *p, Pacote pacote) {
    NoPilha *novo = (NoPilha *)malloc(sizeof(NoPilha));
    if (novo == NULL) {
        printf("Erro: sem memoria.\n");
        return;
    }

    novo->dado = pacote;
    novo->prox = p->topo;
    p->topo = novo;
}

int desempilhar(Pilha *p, Pacote *pacote) {
    if (pilhaVazia(p)) {
        return 0;
    }

    NoPilha *aux = p->topo;
    *pacote = aux->dado;
    p->topo = aux->prox;
    free(aux);
    return 1;
}

void mostrarPilha(Pilha *p) {
    NoPilha *aux = p->topo;

    if (pilhaVazia(p)) {
        printf("Pilha vazia.\n");
        return;
    }

    printf("Pilha de erros:\n");
    while (aux != NULL) {
        printf("Pacote %d | %d KB | %d ms\n",
               aux->dado.numero,
               aux->dado.tamanhoKB,
               aux->dado.tempoEstimado);
        aux = aux->prox;
    }
}

typedef struct NoLista {
    Pacote dado;
    struct NoLista *prox;
} NoLista;

typedef struct {
    NoLista *inicio;
} Lista;

void inicializarLista(Lista *l) {
    l->inicio = NULL;
}

void inserirFimLista(Lista *l, Pacote p) {
    NoLista *novo = (NoLista *)malloc(sizeof(NoLista));
    if (novo == NULL) {
        printf("Erro: sem memoria.\n");
        return;
    }

    novo->dado = p;
    novo->prox = NULL;

    if (l->inicio == NULL) {
        l->inicio = novo;
    } else {
        NoLista *aux = l->inicio;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

void mostrarLista(Lista *l) {
    NoLista *aux = l->inicio;

    if (aux == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    printf("Historico de pacotes:\n");
    while (aux != NULL) {
        printf("Pacote %d | %d KB | %d ms\n",
               aux->dado.numero,
               aux->dado.tamanhoKB,
               aux->dado.tempoEstimado);
        aux = aux->prox;
    }
}

void liberarLista(Lista *l) {
    NoLista *aux = l->inicio;

    while (aux != NULL) {
        NoLista *temp = aux;
        aux = aux->prox;
        free(temp);
    }

    l->inicio = NULL;
}

Pacote criarPacote(int numero, int tamanhoKB, int tempoEstimado) {
    Pacote p;
    p.numero = numero;
    p.tamanhoKB = tamanhoKB;
    p.tempoEstimado = tempoEstimado;
    return p;
}

void imprimirPacote(Pacote p) {
    printf("Pacote %d | %d KB | %d ms\n", p.numero, p.tamanhoKB, p.tempoEstimado);
}

int main() {
    Fila fila;
    Pilha pilha;
    Lista lista;
    Pacote p;

    inicializarFila(&fila);
    inicializarPilha(&pilha);
    inicializarLista(&lista);

    /* Pacotes do enunciado */ // pacotes da simulaçao práticas
    enfileirar(&fila, criarPacote(1, 500, 50));
    enfileirar(&fila, criarPacote(2, 300, 30));
    enfileirar(&fila, criarPacote(3, 700, 70));
    enfileirar(&fila, criarPacote(4, 200, 20));

    int opcao;
    int numero, tamanho, tempo;

    do {
        printf("\nREDE SIMULADO \n");
        printf("1 > Mostrar fila de espera\n");
        printf("2 > Transmitir proximo pacote da fila\n");
        printf("3 > Registrar pacote com erro\n");
        printf("4 > Retransmitir ultimo pacote com erro\n");
        printf("5 > Mostrar pilha de erros\n");
        printf("6 > Mostrar historico\n");
        printf("0 > Sair\n");
        printf("\n>> \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                mostrarFila(&fila);
                break;

            case 2:
                if (desenfileirar(&fila, &p)) {
                    printf("Pacote transmitido: ");
                    imprimirPacote(p);
                    inserirFimLista(&lista, p);
                } else {
                    printf("Fila vazia.\n");
                }
                break;

            case 3:
                printf("Nº do pacote: ");
                scanf("%d", &numero);
                printf("Tmh em KB: ");
                scanf("%d", &tamanho);
                printf("Tempo em ms: ");
                scanf("%d", &tempo);

                empilhar(&pilha, criarPacote(numero, tamanho, tempo));
                printf("Pacote registrado com erro.\n");
                break;

            case 4:
                if (desempilhar(&pilha, &p)) {
                    printf("Pacote retransmitido: ");
                    imprimirPacote(p);
                    inserirFimLista(&lista, p);
                } else {
                    printf("Nao existe pacotes com erro.\n");
                }
                break;

            case 5:
                mostrarPilha(&pilha);
                break;

            case 6:
                mostrarLista(&lista);
                break;

            case 0:
                printf("Programa Encerrando.\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    liberarLista(&lista);

    return 0;
}
