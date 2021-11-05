#ifndef LISTAARTICULOS_H_INCLUDED
#define LISTAARTICULOS_H_INCLUDED
#include "articulo.h"

typedef struct _nodoArticulo{
    stArticulo dato;
    struct _nodoArticulo* siguiente;
}nodoArticulo;

nodoArticulo* inicLista();
nodoArticulo* crear_nodoArt (stArticulo a);
nodoArticulo* agregarAlPrincipio (nodoArticulo* lista, nodoArticulo* nuevo);


#endif // LISTAARTICULOS_H_INCLUDED
