#include "Shape.hpp"

Shape::Shape()
    : edges()
{
    Edge e(Vector2(0, 0), Vector2(10, 10));
    addEdge(e);
}

void Shape::addEdge(Edge e) 
{
    edges.push_back(e);
}
