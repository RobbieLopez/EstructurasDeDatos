#include "ListaSImple.h"

struct Lista *
insertar (struct Lista *Lista, int dato)
{
  struct Lista *nuevo = (struct Lista *) malloc (sizeof (struct Lista));
  struct Lista *tmp;
  if(nuevo==NULL)
    {
      exit(-1);
    }
  nuevo->dato = dato;

  if (Lista == NULL)
    {
      nuevo->siguiente = NULL;
      Lista = nuevo;
      return Lista;
    }
  else
    {
      tmp = Lista;
      while (tmp->siguiente != NULL)
	{
	  tmp = tmp->siguiente;
	}
      tmp->siguiente = nuevo;
    }
  return Lista;

}

struct Lista *
mostrar (struct Lista *Lista)
{
  struct Lista *tmp;

  if (Lista == NULL)
    {
      printf ("Lista Vacia \n");
    }
  tmp = Lista;
  while (tmp != NULL)
    {
      printf (" %d \n", tmp->dato);
      tmp = tmp->siguiente;
    }
  return Lista;
}


struct Lista *
eliminar (struct Lista *Lista, int dato)
{
  struct Lista *tmp1, *tmp2;

  if (Lista == NULL)
    {
      printf ("lista vacia \n");
    }
  else
    {
      tmp1 = Lista;
      tmp2 = Lista;
      while (tmp1 != NULL && tmp1->dato != dato)
	{
	  tmp2 = tmp1;
	  tmp1 = tmp1->siguiente;
	}
      if (tmp1 == Lista)
	{
	  Lista = tmp1->siguiente;
	  free (tmp1);

	}
      else
	{
	  tmp2->siguiente = tmp1->siguiente;
	  free (tmp1);

	}

    }
  return Lista;
}
