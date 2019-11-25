#ifndef __PILA_H__
#define __PILA_H__

#include <stdio.h>
#include <stdlib.h>


struct pila
{
  int dato;
  struct pila *siguiente;
};

//int obtenerDato();
struct pila* push (int dato, struct pila *pila);
struct pila* pop (struct pila *pila);
struct pila* mostrar (struct pila *pila);
struct pila* contarNodos (struct pila *pila);


#endif
