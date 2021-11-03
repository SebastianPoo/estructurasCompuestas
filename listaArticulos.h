#ifndef LISTAARTICULOS_H_INCLUDED
#define LISTAARTICULOS_H_INCLUDED
#include "articulo.h"

typedef struct _nodoArticulo{
    stArticulo dato;
    struct _nodoArticulo* siguiente;
}nodoArticulo;

#endif // LISTAARTICULOS_H_INCLUDED
