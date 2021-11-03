#ifndef ARBOLLISTA_H_INCLUDED
#define ARBOLLISTA_H_INCLUDED
#include "cliente.h"
#include "listaArticulos.h"

typedef struct _nodoArbolLista{
    stCliente dato;
    nodoArticulo* articulo;
    struct _nodoArbolLista* izq;
    struct _nodoArbolLista* der;
}nodoArbolLista;

nodoArbolLista* buscarCliente(nodoArbolLista* adl, char cuil[]);
nodoArbolLista* alta_nadl(nodoArbolLista* adl, stCliente c, stArticulo a);
nodoArbolLista* agregar_nadl(nodoArbolLista* nadl, nodoArbolLista* nuevo);
nodoArbolLista* crear_nadl(stCliente c);
nodoArbolLista* inicNodoArbolLista();
nodoArbolLista* archivo2Arbol (char archivo []);

#endif // ARBOLLISTA_H_INCLUDED
