#ifndef __LISTACIRCULAR_H__
#define __LISTACIRCULAR_H__

#include <stdio.h>
#include <stdlib.h>

struct Lista
{
  int dato;
  struct Lista *siguiente;
};
struct Lista *insertar (int dato, struct Lista *);
struct Lista *mostrar (struct Lista *);
struct Lista *eliminar (int, struct Lista *);

#endif
