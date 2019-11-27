#include "cola.h"

struct Cola *
crearCola (struct Cola *cola)
{
  struct Cola *Cola = NULL;
  Cola = (struct Cola *) malloc (sizeof (struct Cola));

}

struct Cola *
eliminarCola (struct Cola *cola)
{
  struct Cola *Cola = NULL;
  if (Cola == NULL)
    {
      return NULL;
    }
  else
    {
      struct Cola *tmp = Cola;
      Cola = Cola->ultimo;
      free (tmp);
    }
  return cola;
}

struct Cola *
enqueue (struct Cola *cola, int dato)
{
  if (cola == NULL)
    {
      cola = (struct Cola *) malloc (sizeof (struct Cola));
      cola->dato = dato;
      cola->ultimo = NULL;
    }
  else
    {
      struct Cola *tmp = cola;
      struct Cola *anterior = NULL;
      while (cola != NULL)
	{
	  anterior = cola;
	  cola = cola->ultimo;
	}
      cola = (struct Cola *) malloc (sizeof (struct Cola));
      cola->dato = dato;
      cola->ultimo = NULL;
      anterior->ultimo = cola;
      cola = tmp;

    }
  return cola;
}

struct Cola *
dequeue (struct Cola *cola)
{
  struct Cola *Cola = NULL;
  if (Cola == NULL)
    {
      printf ("Cola vacia");
    }
  else
    {
      struct Cola *tmp = Cola;
      Cola = Cola->ultimo;
      free (tmp);
    }
  return cola;
}

struct Cola *
mostrar (struct Cola *cola)
{
  struct Cola *Cola = NULL;

  if (Cola == NULL)
    {
      printf ("\n");
    }
  else
    {
      struct Cola *cola = Cola;
      while (cola != NULL)
	{
	  printf ("%d->", cola->dato);
	  cola->ultimo = cola;
	}

    }
  return cola;
}
