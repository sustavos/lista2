#include <iostream>
#include <cmath>
#include "point2d.h"

Point2d::Point2d(float x, float y){
    m_x = x;
    m_y = y;
}

Point2d::Point2d(){
    m_x = 0;
    m_y = 0;
}

float Point2d::distancia(Point2d f){
    float x1, x2, y1, y2;

    x1 = m_x;
    x2 = f.m_x;
    y1 = m_y;
    y2 = f.m_y;

    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

void Point2d::print(){
    cout << "Point2d(" << m_x <<","<< m_y <<")" << endl;
}
