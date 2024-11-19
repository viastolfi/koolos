#ifndef VERTICE_HPP
#define VERTICE_HPP

#include "Shape.hpp"
#include "Vector2.hpp"
#include "Colors.hpp"

class Vertice : public Shape
{
public:
    inline Vertice(int x, int y, Color c) :Shape(c), x(x), y(y), coordinates(Vector2(x,y)) {};
    inline Vertice(int x, int y) :Shape(), x(x), y(y), coordinates(Vector2(x,y)) {};
    inline Vertice(Vector2 c): Shape(), coordinates(c) {};
    inline Vertice(Vector2 c, Color co): Shape(co), coordinates(c) {};

    std::vector<Vector2> draw() override;

    int x;
    int y;
private:
    Vector2 coordinates;
};

#endif // VERTICE_HPP
