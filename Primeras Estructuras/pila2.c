#include<stdio.h>
#include<stdlib.h>

struct pila{
    int dato;
    struct pila *siguiente;
};


struct pila *cabeza = NULL;
struct pila *actual = NULL;


int obtenerDato();
void push();
void pop();
void ContarNodos();
void ImprimirPila();

int main(){
    return menu();
}

void push(){

    struct pila *nodo = (struct pila*)malloc(sizeof(struct pila*));

    if(NULL == nodo){
        printf("\n Error en creacion de nodo \n");
    }
    nodo->dato = obtenerDato();
    nodo->siguiente = cabeza;
    cabeza = nodo;

}

void pop(){

    if(NULL == cabeza){
            printf("La pila esta vacia \n");
    }else{
        struct pila *nodo = cabeza;
        printf("\n Dato: %d ",nodo->dato);
        
        cabeza=nodo->siguiente;
        free(nodo);
    }

}
void ImprimirPila(void){

    if(NULL == cabeza){
        printf("La pila esta vacia \n");
    }else{
        struct pila *nodo = cabeza;
        printf("\n Inicio de la Pila\n");

        while(nodo != NULL)
        {
            printf("\n Dato: %d ",nodo->dato);
            nodo = nodo->siguiente;
        }

        printf("\nFinal de la Pila\n");

    }

}
void ContarNodos(void){
    struct pila *nodo = cabeza;
    int i=0;

    while(nodo != NULL){
        i++;
        nodo = nodo->siguiente;
    }

    printf("\n Cantidad de nodos: %d\n", i);
    return;
}
int obtenerDato() {
  int num;
  printf("\nIngrese el dato: ");
  scanf("%d" , &num);
  return num;
}
int menu()
{
char c;
do {
    printf("\n");
    printf("\n 1. push");
    printf("\n 2. pop");
    printf("\n 3. Imprimir Lista");
    printf("\n 4. Contar Nodos ");
    printf("\n S: salir.\n");
    c = getchar();

    switch(c) {
      case '1':
          push();
        break;
      case '2':
          pop();
        break;
      case '3':
          ImprimirPila();
        break;
      case '4':
          ContarNodos();
        break;
      default:
        break;
    }
  } while(c != 'S' && c != EOF);
}
