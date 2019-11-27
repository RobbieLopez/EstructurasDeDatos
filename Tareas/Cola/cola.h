#ifndef COLA__H__
#define COLA__H__
#include <stdio.h>
#include <stdlib.h>

struct Cola
{
  int dato;
  struct Cola *ultimo;

};

struct Cola *crearCola (struct Cola *cola);
struct Cola *eliminarCola (struct Cola *cola);
struct Cola *enqueue (struct Cola *cola, int dato);
struct Cola *dequeue (struct Cola *cola);
struct Cola *mostrar (struct Cola *cola);
#endif
