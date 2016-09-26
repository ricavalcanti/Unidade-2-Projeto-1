#include "retangulo.h"

Retangulo::Retangulo(int x, int y, int largura, int altura)
{
    add_v(x,y);

    add_v(x,(y-altura));

    add_v((x +largura),(y-altura));

    add_v((x + largura),(y+altura));
}
