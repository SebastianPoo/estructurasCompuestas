#ifndef ARBOLLISTA_H_INCLUDED
#define ARBOLLISTA_H_INCLUDED
#include "cliente.h"
#include "listaArticulos.h"

typedef struct _nodoArbolLista{
    stCliente dato;
    nodoArticulo* articulo;
    struct _nodoArbolLista* izq;
    struct _nodoArbolLista* der;
}nodoArbolLista;



#endif // ARBOLLISTA_H_INCLUDED
