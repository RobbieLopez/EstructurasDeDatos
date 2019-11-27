#include "ListaContigua.h"

int
main ()
{
  struct Lista *Lista = NULL;

  Lista = (struct Lista *) malloc (sizeof (struct Lista));
  Lista->Fin = 0;


  insertar (Lista, 1);
  insertar (Lista, 2);
  insertar (Lista, 3);
  insertar (Lista, 4);
  insertar (Lista, 5);
  insertar (Lista, 6);
  insertar (Lista, 7);
  insertar (Lista, 8);
  insertar (Lista, 9);
  insertar (Lista, 10);

  printf ("\n");
  mostrar (Lista);
  printf ("\n");
  eliminar (Lista, 10);
  printf ("\n");
  mostrar (Lista);

  return 0;
}
