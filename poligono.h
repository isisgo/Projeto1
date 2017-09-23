#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

#define N 100 //definindo o numero maximo de vertices do poligono

class Poligono{

private:
    Point pol[N];
    int init = 0;

public:

    void addPonto(float x, float y); //adiciona pontos para formar o poligono
    Point getInit();

    int conta();
    float area();

    //void translada(float a, float b);

    void rotaciona(float ang, Point p);
    void imprime();


};


#endif // POLIGONO_H
