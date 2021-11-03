#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED

typedef struct {
    char articulo[30];
    char marca[30];
    char rubro[20];
    float precio;
    int cantidad;
}stArticulo;

void muestraUnArticulo(stArticulo a);
void getRubro(int nro, char rubro[]);

#endif // ARTICULO_H_INCLUDED
