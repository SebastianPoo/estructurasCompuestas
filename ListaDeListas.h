#ifndef LISTADELISTAS_H_INCLUDED
#define LISTADELISTAS_H_INCLUDED
#include "cliente.h"
#include "listaArticulos.h"

typedef struct _listaDListas{
    stCliente dato;
    nodoArticulo* listArticulo;
    struct listaDListas* siguiente;
}listaDListas;

listaDListas* buscarClienteLista (listaDListas* lista, char cuil []);
listaDListas* alta_ldl (listaDListas* lista, stCliente c, stArticulo a);
void muestraUnNodo_ldl (listaDListas* nodo);
void mostrarLista_ldl (listaDListas* lista);
listaDListas* agregarAlPrincipio_ldl (listaDListas* lista, listaDListas* nuevo);
listaDListas* crear_ldl (stCliente c);
listaDListas* inicListaDListas ();
int listaToArreglo_Apellidos (listaDListas* lista, char apellidos[][30]);

#endif // LISTADELISTAS_H_INCLUDED
