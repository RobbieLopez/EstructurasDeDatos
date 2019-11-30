#include "ListaCircular.h"

struct Lista *
insertar (int dato, struct Lista *Lista)
{
  struct Lista *nuevo = NULL;
  struct Lista *tmp = NULL;
  nuevo = (struct Lista *) malloc (sizeof (struct Lista));
  if(!nuevo){
  exit();
  }
  nuevo->dato = dato;
  if (Lista == NULL)
    {
      Lista = nuevo;
      Lista->siguiente = NULL;
    }
  else if (Lista->siguiente == NULL)
    {
      Lista->siguiente = nuevo;
      nuevo->siguiente = Lista;
    }
  else
    {
      tmp = Lista;
      while (tmp->siguiente != Lista)
	{
	  tmp = tmp->siguiente;
	}
      tmp->siguiente = nuevo;
      nuevo->siguiente = Lista;
    }
  return Lista;
}

struct Lista *
eliminar (int dato, struct Lista *Lista)
{
  struct Lista *actual = NULL;
  struct Lista *tmp = NULL;
  actual = Lista;
  if ((actual->dato == dato) && (actual == Lista))
    {
      tmp = Lista;
      while (tmp->siguiente != Lista)
	{
	  tmp = tmp->siguiente;
	}
      tmp->siguiente = Lista->siguiente;
      Lista = actual->siguiente;
      free (actual);
      return Lista;
    }
  else
    {
      while (actual->siguiente != Lista)
	{
	  tmp = actual;
	  actual = actual->siguiente;
	  if (actual->dato == dato)
	    {
	      tmp->siguiente = actual->siguiente;
	      free (actual);
	      return Lista;
	    }
	}
    }
  if (actual->siguiente == Lista)
    {
      printf ("\n");
    }
  return Lista;
}

struct Lista *
mostrar (struct Lista *Lista)
{
  struct Lista *lista = NULL;
  lista = Lista;
  while (lista->siguiente != Lista)
    {
      printf ("%d\n", lista->dato);
      lista = lista->siguiente;
    }
  printf ("%d\n", lista->dato);
  return Lista;
}
