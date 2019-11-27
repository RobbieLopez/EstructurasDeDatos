#include "ListaSImple.h"

int
main ()
{
  struct Lista *Lista = NULL;
  Lista = insertar (Lista, 1);
  Lista = insertar (Lista, 2);
  Lista = insertar (Lista, 3);
  Lista = insertar (Lista, 4);
  Lista = insertar (Lista, 5);
  Lista = insertar (Lista, 6);

  mostrar (Lista);
  printf ("\n");
  Lista = eliminar (Lista, 2);
  Lista = eliminar (Lista, 4);
  Lista = eliminar (Lista, 6);
  printf ("\n");
  mostrar (Lista);
}
