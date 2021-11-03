#ifndef VENTAS_H_INCLUDED
#define VENTAS_H_INCLUDED

typedef struct{
    int id;
    char articulo[30];
    char marca[30];
    char rubro[20];
    float precio;
    int cantidad;
    char apellidoCliente[30];
    char nombreCliente[30];
    char cuilCliente[15];
}stVentas;


#endif // VENTAS_H_INCLUDED
