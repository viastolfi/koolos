#ifndef VERTICE_HPP
#define VERTICE_HPP

#include "Shape.hpp"
#include "Vector2.hpp"
#include "Colors.hpp"

class Vertice : public Shape
{
public:
    inline Vertice(Vector2 c): Shape(), coordinates(c) {};
    inline Vertice(Vector2 c, Color co): Shape(co), coordinates(c) {};
    std::vector<Vector2> draw() override;
private:
    Vector2 coordinates;
};

#endif // VERTICE_HPP
