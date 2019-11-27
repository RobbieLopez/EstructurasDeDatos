#ifndef __LISTASIMPLE__H
#define __LISTASIMPLE__H
#include <stdio.h>
#include <stdlib.h>
struct Lista
{
  int dato;
  struct Lista *siguiente;
};

struct Lista *insertar (struct Lista *Lista, int dato);
struct Lista *mostrar (struct Lista *Lista);
struct Lista *eliminar (struct Lista *Lista, int dato);

#endif
