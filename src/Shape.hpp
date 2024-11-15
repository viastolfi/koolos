#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <vector>

#include "Vector2.hpp"
#include "Edge.hpp"

class Shape
{
public:
    Shape();
    void addEdge(Edge e);
private:
    std::vector<Edge> edges;
};

#endif // SHAPE_HPP
