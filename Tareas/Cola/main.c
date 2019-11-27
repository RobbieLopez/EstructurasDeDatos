#include "cola.h"

int
main ()
{
  struct Cola *cola = NULL;
  crearCola (cola);

  cola = enqueue (cola, 1);
  cola = enqueue (cola, 2);
  cola = enqueue (cola, 3);
  cola = enqueue (cola, 4);
  cola = enqueue (cola, 5);
  mostrar (cola);
  printf ("\n");
  cola = dequeue (cola);
  mostrar (cola);
  return 0;


}
