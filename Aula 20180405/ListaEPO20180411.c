#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

typedef struct no {
	int valor;
	struct no *prox;
}No;

typedef struct lista{
	No *inicio;
	No *fim;
};

//assinatura das fun��es:
Lista *criaLista();

void insereLista(Lista *lista, int valor);

void removeLista(Lista *lista, int valor);

void removeTodosLista(Lista *lista, int valor);

void imprimeLista(Lista *lista);

bool buscaLista(Lista *lista, int valor);

void apagaLista(Lista *lista);


void main(){
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	//c�digo main para teste - PDF
	Lista *lista = crialista();
	imprimeLista(lista);
	
	for (int i=0; i<40; i++){
		insereLista(lista, i%10);
	}
	
	imprimeLista(lista);
	
	if(buscalista(lista,0)){
		printf("0 est� na lista");
	}else{
		printf("0 est� n�o na lista");
	}
	
	removeTodosLista(lista, 0);
	imprimeLista(lista);
	insereLista(lista,9);
	imprimeLista(lista);
	removeLista(lista,9);
	insereLista(lista,0);
	imprimeLista(lista);
	apagaLista(lista);
	

}























/* SA�DA ESPERADA:

Lista vazia
0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9
0 est� na lista
1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9
0 est� n�o na lista
1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 0
*/
