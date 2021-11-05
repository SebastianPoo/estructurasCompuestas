#ifndef ARREGLOLISTAS_H_INCLUDED
#define ARREGLOLISTAS_H_INCLUDED
#include "cliente.h"
#include "listaArticulos.h"


typedef struct _stCeldas{
    stCliente dato;
    nodoArticulo* articulo;
}stCeldas;

int alta_arreListas (stCeldas* arrayListas[], stCliente c, int validos, stArticulo a);
int buscaEnCeldas (stCeldas* arreglo[], int validos, stCliente c);
int agregarEnArreglo (stCeldas* arreglo[], int validos, stCliente c);
int celdaToArregloDeNombres (stCeldas* arreglo[], char apellidos[][30], int valCeldas, stCliente c);
#endif // ARREGLOLISTAS_H_INCLUDED
