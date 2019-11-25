
#include "pila.h"


struct pila *cabeza = NULL;
struct pila *actual = NULL;

struct pila *
push (int dato, struct pila *pila)
{

  struct pila *nodo = (struct pila *) malloc (sizeof (struct pila *));

  if (NULL == nodo)
    {
      printf ("\n Error en creacion de nodo \n");
    }
  nodo->dato = dato;
  nodo->siguiente = cabeza;
  cabeza = nodo;

  return pila;
}

struct pila *
pop (struct pila *pila)
{

  if (NULL == cabeza)
    {
      printf ("La pila esta vacia \n");
    }
  else
    {
      struct pila *nodo = cabeza;

      cabeza = nodo->siguiente;
      free (nodo);
    }
  return pila;
}

struct pila *
mostrar (struct pila *pila)
{

  if (NULL == cabeza)
    {
      printf ("La pila esta vacia \n");
    }
  else
    {
      struct pila *nodo = cabeza;
      printf ("\n Inicio de la Pila\n");

      while (nodo != NULL)
	{
	  printf ("\n Dato: %d ", nodo->dato);
	  nodo = nodo->siguiente;
	}

      printf ("\nFinal de la Pila\n");

    }
  return pila;

}

struct pila *
contarNodos (struct pila *pila)
{
  struct pila *nodo = cabeza;
  int i = 0;

  while (nodo != NULL)
    {
      i++;
      nodo = nodo->siguiente;
    }

  printf ("\n Cantidad de nodos: %d\n", i);
  return pila;
}

/*int obtenerDato() {
  int num;
  printf("\nIngrese el dato: ");
  scanf("%d" , &num);
  return num;
}*/
