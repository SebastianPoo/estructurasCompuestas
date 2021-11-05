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
    while (lista)
    {
        muestraUnNodo_ldl(lista);
        lista = lista->siguiente;
    }
}

void muestraUnNodo_ldl (listaDListas* nodo)
{
    while (nodo->listArticulo)
    {
        muestraUnArticulo(nodo->listArticulo->dato);
        nodo->listArticulo = nodo->listArticulo->siguiente;
    }
}

listaDListas* alta_ldl (listaDListas* lista, stCliente c, stArticulo a)
{
    nodoArticulo* nuevoArt = crear_nodoArt(a);
    listaDListas* respuesta = inicListaDListas();
    respuesta=buscarClienteLista (lista, c.cuilCliente);

    return lista;
}

listaDListas* buscarClienteLista (listaDListas* lista, char cuil [])
{
    listaDListas* respuesta = inicListaDListas();
    while(lista && respuesta==NULL)
    {
        if (lista->dato.cuilCliente==cuil)
        {
            respuesta = lista;
        }
        lista = lista->siguiente;
    }
    return respuesta;
}

