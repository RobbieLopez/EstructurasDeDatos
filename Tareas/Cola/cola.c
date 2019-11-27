#include "cola.h"

struct Cola *crearCola(struct Cola *cola){
	struct Cola *cola=NULL;
	
}
struct Cola *eliminarCola(struct Cola *cola{
	struct Cola *cola=NULL;
	if((Cola==NULL)
	{
		return;
	}else{
		struct Cola *tmp=cola;
		cola=cola->ultimo;
		free(tmp);
		eliminar(cola);
	}
	return cola;
}
struct Cola *enqueue(struct Cola * cola, int dato){
	struct Cola *cola=NULL;
	if(cola==NULL){
		cola=(struct Cola*)malloc(sizeof(struct Cola));
cola->dato=dato;
cola->ultimo=NULL;		
	}else{
		struct Cola *tmp=cola;
		struct Cola *anterior=NULL;
		while(cola!=NULL)
		{
			anterior=cola;
			cola=cola->ultimo;
		}
		cola=(struct Cola*)malloc(sizeof(struct Cola));
		cola->dato=dato;
		cola->ultimo=NULL;
		anterior->ultimo=cola;
		cola=tmp;
		
	}
}
struct Cola *dequeue(struct Cola * cola){
	struct Cola *cola=NULL;
	if(cola==NULL)
	{
		printf("Cola vacia");
	}
	else{
		struct Cola *tmp=cola;
		cola=cola->ultimo;
		free(tmp);
	}
	return cola;
}
struct Cola *mostrar(struct Cola * cola){
	if(cola==NULL)
	{
			printf("\n");
	}else{
		printf("%d->",cola->dato);
		mostrar(cola->dato);
		return cola;
}
