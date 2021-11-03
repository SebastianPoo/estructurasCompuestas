#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "arbolLista.h"

nodoArbolLista* inicNodoArbolLista()
{
    return NULL;
}

nodoArbolLista* crear_nadl(stCliente c)
{
    nodoArbolLista* nuevo =(nodoArbolLista*)malloc(sizeof(nodoArbolLista));
    nuevo->dato=c;
    nuevo->der=NULL;
    nuevo->izq=NULL;
    return nuevo;
}

nodoArbolLista* agregar_nadl(nodoArbolLista* nadl, nodoArbolLista* nuevo)
{
    if (nadl==NULL){
        nadl=nuevo;
    }else{
        if(strcmp(nadl->dato.cuilCliente,nuevo->dato.cuilCliente)<0){
            nadl->izq=agregar_nadl(nadl->izq, nuevo);
        }else{
            nadl->der=agregar_nadl(nadl->der, nuevo);
        }
    }
    return nadl;
}

nodoArbolLista* alta_nadl(nodoArbolLista* adl, stCliente c, stArticulo a)
{
    nodoArticulo* nuevoArt=inicLista();

    return adl;
}

