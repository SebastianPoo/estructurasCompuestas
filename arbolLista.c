#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "arbolLista.h"
#include "ventas.h"

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
    if (nadl==NULL)
    {
        nadl=nuevo;
    }
    else
    {
        if(strcmp(nadl->dato.cuilCliente,nuevo->dato.cuilCliente)<0)
        {
            nadl->izq=agregar_nadl(nadl->izq, nuevo);
        }
        else
        {
            nadl->der=agregar_nadl(nadl->der, nuevo);
        }
    }
    return nadl;
}

nodoArbolLista* alta_nadl(nodoArbolLista* adl, stCliente c, stArticulo a)
{
    nodoArticulo* nuevoArt=crear_nodoArt(a);
    nodoArbolLista* respuesta = buscarCliente(adl, c.cuilCliente);
    if(respuesta==NULL)
    {
        nodoArbolLista* nuevoNodoArb=crear_nadl(c);
        nuevoNodoArb->articulo = agregarAlPrincipio(nuevoNodoArb->articulo, nuevoArt);
        adl=agregar_nadl(adl,nuevoNodoArb);

    }
    else
    {
        respuesta->articulo=agregarAlPrincipio(respuesta->articulo,nuevoArt);
    }

    return adl;
}

nodoArbolLista* buscarCliente(nodoArbolLista* adl, char cuil[])
{
    nodoArbolLista* respuesta = inicNodoArbolLista();
    if(adl==NULL)
    {
        respuesta = NULL;
    }
    else
    {
        if(strcmp(adl->dato.cuilCliente, cuil)==0)
        {
            respuesta=adl;
        }
        else
        {
            if(strcmp(adl->dato.cuilCliente, cuil)>0)
            {
                respuesta=buscarCliente(adl->der, cuil);
            }
            else
            {
                respuesta=buscarCliente(adl->izq, cuil);
            }
        }
    }
    return respuesta;
}

int cuentaProductos (nodoArbolLista* cliente, float filtro)
{
    int cont=0;
        while(cliente->articulo)
        {
            if (cliente->articulo->dato.precio > filtro)
            {
                cont++;
            }
            cliente->articulo = cliente->articulo->siguiente;
        }

    return cont;
}


float sumaCosto (nodoArbolLista* cliente, char filtro[])
{
    float costo=0;
    if (cliente->articulo){
            if(strcmp(cliente->articulo->dato.marca, filtro)==0){
                costo = cliente->articulo->dato.precio + sumaCosto(cliente->articulo->siguiente,filtro);
            }else{
                costo = sumaCosto(cliente->articulo->siguiente,filtro);
            }
    }
    return costo;
}


nodoArbolLista* archivo2Arbol (char archivo [])
{
    nodoArbolLista* adl = inicNodoArbolLista();
    stVentas v;
    stCliente c;
    stArticulo a;

    FILE *archi = fopen(archivo, "rb");
    if(archi)
    {
        while(fread(&v,sizeof(stVentas),1,archi)>0)
        {
            strcpy(c.apellidoCliente,v.apellidoCliente);
            strcpy(c.cuilCliente,v.cuilCliente);
            strcpy(c.nombreCliente,v.nombreCliente);
            strcpy(a.articulo,v.articulo);
            strcpy(a.marca,v.marca);
            strcpy(a.rubro,v.rubro);
            a.cantidad = v.cantidad;
            a.precio = v.precio;
            adl=alta_nadl(adl,c,a);
        }
        fclose(archi);
    }
    return adl;
}
