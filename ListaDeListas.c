#include <stdio.h>
#include <string.h>
#include <string.h>
#include "articulo.h"
#include "ListaDeListas.h"

listaDListas* inicListaDListas ()
{
    return NULL;
}

listaDListas* crear_ldl (stCliente c)
{
    listaDListas* nuevo =(listaDListas*)malloc(sizeof(listaDListas));
    nuevo->dato = c;
    nuevo->siguiente = NULL;
    return nuevo;
}

listaDListas* agregarAlPrincipio_ldl (listaDListas* lista, listaDListas* nuevo)
{
    nuevo->siguiente = lista;

    return nuevo;
}

void mostrarLista_ldl (listaDListas* lista)
{
    while (lista){
        muestraUnNodo_ldl(lista);
        lista = lista->siguiente;
    }
}

void muestraUnNodo_ldl (listaDListas* nodo)
{
    while (nodo->listArticulo){
     muestraUnArticulo(nodo->listArticulo->dato);
     nodo->listArticulo = nodo->listArticulo->siguiente;
    }
}
