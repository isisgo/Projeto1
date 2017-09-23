#include <iostream>
#include <math.h>
#include "point.h"

using namespace std;

Point::Point(){}

Point::Point (float _x, float _y){

    x = _x;
    y = _y;
}

void Point::setX(float _x){

    x = _x;
}

void Point::setY (float _y){

    y = _y;
}

void Point::setXY(float _x, float _y){

    x = _x; //setX;
    y = _y; //setY;
}

float Point::getX(){

    return x;
}

float Point::getY(){

    return y;
}

Point Point::add(Point p1){

    Point p2;

    p2.x = x + p1.x;
    p2.y = y + p2.y;

    return p2;
}

Point Point::sub(Point p1){

    Point p2;

    p2.x = x - p1.x;
    p2.y = y - p1.y;
}


//distancia do ponto ate a origem
//raiz de (a^2+b^2)
float Point::norma(){
    float a = sqrt(pow(x,2) + pow(y,2));

    return a;
}

//falta a função translada

void Point::imprime(){
    cout << "A coordenada do ponto eh: " << x << ", " << y << endl;

}
