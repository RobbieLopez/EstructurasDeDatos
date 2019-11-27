#include "ListaContigua.h"


int
insertar (struct Lista *Lista, int dato)
{
  int *tmp;

  if (Lista == NULL)
    {
      return -1;
    }

  tmp = (int *) malloc ((Lista->Fin * 2) * sizeof (int));

  *(tmp + (Lista->Fin)) = dato;

  if (tmp == NULL)
    {
      return 0;
    }

  for (int i = 0; i < Lista->Fin; i++)
    {
      *(tmp + i) = *(Lista->datos + i);
    }

  free (Lista->datos);
  Lista->datos = tmp;
  Lista->Fin++;

  return 0;
}

int
eliminar (struct Lista *Lista, int datos)
{
  int *tmp, pos = 0, j = 0;

  if (Lista == NULL)
    {
      return -1;
    }

  for (int i = 0; i < Lista->Fin; i++)
    {
      if (datos == *(Lista->datos + i))
	{
	  pos = i;
	}
    }

  tmp = (int *) malloc ((Lista->Fin / 2) * sizeof (int));

  for (int i = 0; i < Lista->Fin; i++)
    {
      if (i != pos)
	{
	  *(tmp + j) = *(Lista->datos + i);
	  j++;
	}
    }

  free (Lista->datos);
  Lista->datos = tmp;
  Lista->Fin--;

  return 0;
}

void
mostrar (struct Lista *Lista)
{
  for (int i = 0; i < Lista->Fin; i++)
    {
      printf ("%d ", *(Lista->datos + i));
    }
  printf ("\n");
}
