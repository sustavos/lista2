#include <iostream>
using namespace std;

class Point2d{
    private:
        
    public:
        float m_x;
        float m_y;

        Point2d(float x, float y);
        Point2d();
        
        float distancia(Point2d f);

        void print();
};