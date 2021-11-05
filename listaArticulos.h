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
int arregloCharDeLista  (nodoArticulo* lista, char marcas[][20]);
int cuentaLista(nodoArticulo* lista);
void muestraUnNodo(nodoArticulo* nodo);
void mostrarLista (nodoArticulo* lista);

#endif // LISTAARTICULOS_H_INCLUDED
