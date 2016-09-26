#include <iostream>
#include "ponto.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    Retangulo r(0,0,3,4);
    r.imprime();
    cout<<endl<<"Area: "<<r.area()<<endl;

    r.move(-3, 4);
    cout<<"Nova area: "<<r.area()<<endl;


    return 0;

}
