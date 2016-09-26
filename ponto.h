#ifndef PONTO_H
#define PONTO_H

class Ponto{
private:
    float x, y;
public:
    Ponto();
    Ponto(float x, float y);
    void setX(float x);
    void setY(float y);
    void setXY(float x, float y);
    float getX();
    float getY();
    Ponto add(Ponto P);
    Ponto sub(Ponto P);
    float norma();
    void translada(float a, float b);
    void imprime();
};

#endif //
