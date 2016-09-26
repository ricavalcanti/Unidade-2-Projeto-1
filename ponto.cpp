#include "ponto.h"
#include <iostream>
#include <cmath>

using namespace std;

//construtor vazio
Ponto::Ponto()
{
    this->x = 0;
    this->y = 0;
}

//construtor com parametros de inicializacao x e y
Ponto::Ponto(float x, float y)
{
    this->x = x;
    this->y = y;
}


//modificador de atributo y
void Ponto::setY(float y)
{
    this->y = y;
}

//modificador de atributo x
void Ponto::setX(float x)
{
    this->x = x;
}

//modificador de atributo x e y
void Ponto::setXY(float x, float y)
{
    this->x = x;
    this->y = y;
}

//retorna valor de x
float Ponto::getX()
{
    return this->x;
}

//retorna valor de y
float Ponto::getY()
{
    return this->y;
}

//somador com parametro Ponto
Ponto Ponto::add(Ponto P)
{
    //obs: testar outro
    Ponto ret;
    ret.setX(this->getX()+P.getX()); // soma o atributo x do ponto definido com o x do parametro
    ret.setY(this->getY()+P.getY());//Troquei x por y // soma o atributo y do ponto definido com o y do parametro
    return ret; // retorna um ponto com a soma

}

Ponto Ponto::sub(Ponto P)
{
    Ponto ret;
    ret.x = this->x - P.x; // subtrai o atributo x do ponto definido com o x do parametro
    ret.y = this->y - P.y; // subtrai o atributo y do ponto definido com o y do parametro
    return ret; // retorna um ponto com a subtracao
}

float Ponto::norma()
{
    return sqrt(pow(this->x,2)+pow(this->y,2));
}

void Ponto::translada(float a, float b)
{
    this->x = this->x + a;
    this->y = this->y + b;
}

void Ponto::imprime()
{
    cout << "(" << this->x << ", " << this->y << ")"; //tirei o ENDL
}
