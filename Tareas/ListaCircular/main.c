#include "ListaCircular.h"

int
main ()
{
  struct Lista *Lista = NULL;
  Lista = insertar (1, Lista);
  Lista = insertar (2, Lista);
  Lista = insertar (3, Lista);
  Lista = insertar (4, Lista);
  Lista = insertar (5, Lista);
  Lista = insertar (6, Lista);
  Lista = insertar (7, Lista);
  Lista = insertar (8, Lista);
  printf ("\n");
  mostrar (Lista);
  printf ("\n");
  Lista = eliminar (2, Lista);
  Lista = eliminar (5, Lista);
  Lista = eliminar (7, Lista);
  mostrar (Lista);
  return 0;
}
