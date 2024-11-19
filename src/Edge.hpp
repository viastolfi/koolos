#ifndef EDGE_HPP
#define EDGE_HPP

#include <cmath>

#include "Shape.hpp"
#include "Colors.hpp"
#include "Vertice.hpp"

class Edge : public Shape
{
public:
    Edge(Vertice s, Vertice e);
    Edge(Vertice s, Vertice e, Color c);
    std::vector<Vector2> draw() override;
private:
    Vertice start;
    Vertice end;
};

#endif // EDGE_HPP
