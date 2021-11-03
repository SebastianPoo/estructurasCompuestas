#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "listaArticulos.h"
#include "articulo.h"

nodoArticulo* inicLista()
{
    return NULL;
}

nodoArticulo* crear_nodoArt (stArticulo a)
{
    nodoArticulo* nuevo = (nodoArticulo*)malloc(sizeof(nodoArticulo));
    nuevo->dato = a;
    nuevo->siguiente = NULL;
    return nuevo;
}

nodoArticulo* agregarAlPrincipio (nodoArticulo* lista, nodoArticulo* nuevo)
{
    nuevo->siguiente = lista;
    return nuevo;
}

void mostrarLista (nodoArticulo* lista)
{
    while(lista){
        muestraUnNodo(lista);
        lista=lista->siguiente;
    }
}

void muestraUnNodo(nodoArticulo* nodo)
{
        muestraUnArticulo(nodo->dato);
}
