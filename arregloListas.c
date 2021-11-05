#include <stdio.h>
#include <stdlib.h>
#include "strings.h"

#include "arregloListas.h"



int alta_arreListas (stCeldas* arrayListas[], stCliente c, int validos, stArticulo a)
{
    nodoArticulo* nodoArt = crear_nodoArt(a);
    int pos = buscaEnCeldas(arrayListas,validos, c);
        if(pos == -1){
                validos = agregarEnArreglo(arrayListas,validos,c);
                validos = validos -1;
                arrayListas[validos]->articulo = agregarAlPrincipio(arrayListas[validos]->articulo, nodoArt);
                pos = validos;
            }
        arrayListas[pos]->articulo = agregarAlPrincipio(arrayListas[pos]->articulo, nodoArt);

    return validos;
}


int buscaEnCeldas (stCeldas* arreglo[], int validos, stCliente c)
{
    int pos = -1;
    int i=0;
        while (i<validos && pos == -1){
            if(arreglo[i]->dato.cuilCliente == c.cuilCliente){
                pos = i;
            }
            i++;
        }
    return pos;
}


int agregarEnArreglo (stCeldas* arreglo[], int validos, stCliente c)
{
    arreglo[validos]->dato = c;
    arreglo[validos]->articulo = inicLista();
    validos++;

    return validos;
}
