#ifndef LISTADELISTAS_H_INCLUDED
#define LISTADELISTAS_H_INCLUDED
#include "cliente.h"
#include "listaArticulos.h"

typedef struct _listaDListas{
    stCliente dato;
    nodoArticulo* listArticulo;
    struct listaDListas* siguiente;
}listaDListas;



#endif // LISTADELISTAS_H_INCLUDED
