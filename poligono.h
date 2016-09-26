#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"


class Poligono
{
private:
    Ponto vertices[100];
    int n_vertices;
public:
    Poligono();
    Poligono(Ponto vertices[], int n_vertices);

    void add_v(float x, float y);
    int qtdV();
    void move(float a, float b);
    float area();
    void imprime();
};

#endif // POLIGONO_H
