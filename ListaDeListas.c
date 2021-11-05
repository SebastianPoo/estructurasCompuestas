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
    listaDListas* respuesta = buscarClienteLista (lista, c.cuilCliente);
    if (respuesta==NULL)
    {
        listaDListas* clienNuevo = crear_ldl(c);
        clienNuevo->listArticulo = agregarAlPrincipio(clienNuevo->listArticulo, nuevoArt);
        lista = agregarAlPrincipio_ldl(lista,clienNuevo);
    }
    else
    {
        respuesta->listArticulo = agregarAlPrincipio(respuesta->listArticulo, nuevoArt);
    }
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

int listaToArreglo_Apellidos (listaDListas* lista, char apellidos[][30])
{
    int i = 0;
    int dim = cuentaLista_ldl(lista);
    while (lista && i<=dim)
    {
        strcpy(apellidos[i],lista->dato.apellidoCliente);
        lista = lista->siguiente;
        i++;
    }
    return i;
}

int cuentaLista_ldl( listaDListas* lista)
{
    int cant = 0;
    while(lista)
    {
        cant++;
        lista = lista->siguiente;

    }
    return cant;
}

