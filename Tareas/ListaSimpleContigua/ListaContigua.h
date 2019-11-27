#ifndef Contigua_H
#define Contigua_H

#include <stdio.h>
#include <stdlib.h>

struct Lista
{
  int dato;
  int Fin;
  int *datos;
};

int insertar (struct Lista *, int);
int eliminar (struct Lista *, int);
void mostrar (struct Lista *);

#endif
