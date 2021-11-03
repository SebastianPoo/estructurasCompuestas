#include <stdio.h>
#include <string.h>
#include <string.h>
#include "articulo.h"



void muestraUnArticulo(stArticulo a)
{
    printf("\nArticulo....................: %s", a.articulo );
    printf("\nMarca........................: %s", a.marca);
    printf("\nRubro.......................: (%s)", a.rubro);
    printf("\nPrecio.......................: %f", a.precio);
    printf("\nCantidad.....................: %d", a.cantidad);
}


void getRubro(int nro, char rubro[])
{
    switch(nro)
    {
    case 1:
        strcpy(rubro, "Televisores");
        break;
    case 2:
        strcpy(rubro, "Lavarropas");
        break;
    case 3:
        strcpy(rubro, "Cocinas");
        break;
    case 4:
        strcpy(rubro, "Calefactores");
    }
}
