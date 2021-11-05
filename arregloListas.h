#ifndef ARREGLOLISTAS_H_INCLUDED
#define ARREGLOLISTAS_H_INCLUDED
#include "cliente.h"
#include "listaArticulos.h"


typedef struct _stCeldas{
    stCliente dato;
    nodoArticulo* articulo;
}stCeldas;

#endif // ARREGLOLISTAS_H_INCLUDED
