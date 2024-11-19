#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Shape.hpp"
#include "Vertice.hpp"
#include "Edge.hpp"

class Square : public Shape
{
public:
    Square(Vertice s, Vertice e);
    Square(Vertice s, Vertice e, Color c);
    std::vector<Vector2> draw() override;
private:
    Vertice start;
    Vertice end;
};

#endif // SQUARE_HPP
