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

int arregloCharDeLista  (nodoArticulo* lista, char marcas[][20])
{
    int i = 0;
    int dim = cuentaLista(lista);
    while(lista && i < dim){
        strcpy(marcas[i],lista->dato.marca);
        lista = lista->siguiente;
        i++;
    }
    return i;
}

int cuentaLista(nodoArticulo* lista)
{
    int cont=0;

    while(lista)
    {
        cont++;
        lista = lista->siguiente;
    }
    return cont;
}
