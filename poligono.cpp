#include "poligono.h"
#include<iostream>
#include<cmath>

using namespace std;

//construtor default
Poligono::Poligono()
{
    this->n_vertices = 0;
    this->vertices[0].setXY(0,0);
}

//Construtor inicializado

Poligono::Poligono(Ponto vertices[], int n_vertices)
{
    this->n_vertices = n_vertices;
    for(int i = 0; i< n_vertices; i++)
    {
        this->vertices[i] = vertices[i];
    }
}

void Poligono::add_v(float x, float y)
{
    if(n_vertices<100)
    {
        this->vertices[n_vertices].setXY(x, y);//O vetor que armazena os vertices recebe o ponto v no seu ultimo indice
        n_vertices++;
    }
    else
    {
        cout<<"Numero de vertices maximo ja foi atingido\n";
    }
}

int Poligono::qtdV()
{
    return this->n_vertices;
}

float Poligono::area()
{
    float soma_positiva = 0, soma_negativa = 0;

    for(int i = 0; i < n_vertices; i++)
    {
        soma_positiva = soma_positiva + (this->vertices[i].getX()) * (this->vertices[i+1].getY());
        soma_negativa = soma_negativa + (this->vertices[i].getY()) * (this->vertices[i+1].getX());
    }
    return abs((soma_positiva - soma_negativa)/2.0);
}

void Poligono::move(float a, float b)
{

    for(int i = 0; i < this->n_vertices; i++)
    {
        this->vertices[i].translada(a, b);
    }
}

void Poligono::imprime()
{
    for(int i=0; i< this->n_vertices-1; i++)
    {
        vertices[i].imprime();
        cout<<"-> ";
    }
    vertices[n_vertices - 1].imprime();
    cout<<"-> ";
    vertices[0].imprime();
}






