#ifndef POINT_H
#define POINT_H

class Point{

private:
    float x, y;

public:

    Point();

    Point(float _x, float _y);


    //Define o valor da coordenada X do ponto
    void setX(float _x);


    //Define o valor da coordenada Y do ponto
    void setY(float _y);


    //Define, numa função apenas, os valores das
    //coordenadas X e Y
    void setXY(float _x, float _y);


    //Imprime o valor de X
    float getX();

    //Imprime o valor de Y
    float getY();

    /* Adiciona as coordenadas X e Y do ponto com as
       coordenadas X1 e Y1 do ponto P1 */
    Point add(Point p1);

    /* Subtrai as coordenadas X e Y do ponto com as
       coordenadas X1 e Y1 do ponto P1 */
    Point sub(Point p1);

    //Calcula a distância do ponto até a origem (0,0)
    float norma();


    //falta implementar translada
    //void translada(float a, float b);

    //Imprime as coordenadas do ponto na forma X e Y
    void imprime();

};



#endif // POINT_H
