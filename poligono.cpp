#include <iostream>
#include <math.h>
#include "point.h"
#include "poligono.h"

using namespace std;

void Poligono::addPonto(float x, float y){
    pol[init].setXY(x,y);
    init = init +1;
}

int Poligono::conta(){

    return init;
}

Point Poligono::getInit(){

    return pol[0];
}

float Poligono::area(){

    float area = 0.0;
    int tamanho = init;

    //algoritmo de shoelace

    int a = tamanho - 1;

    for(int b = 0; b<tamanho; b++){
        area += (pol[b].getX() + pol[b].getX()) * (pol[a].getY() - pol[b].getY());
        a = b;
    }
    float divisor = 2.0;
    return (area/divisor);
}


/*void Poligono::translada(float a, float b){
    int n = init;
    for(int i = 0; i < n; i++){
        pol[i].setX(pol[i].getX() + a);
        pol[i].setY(pol[i].getY() + b);
    }
}
*/
void Poligono::imprime(){
    int n = init;
        for(int i = 0; i < n; i++){
            cout << "(" << pol[i].getX() << ", " << pol[i].getY() << ")";
            if(i < n-1){
                cout << " -> ";
            }
        }

    cout << endl;
}
