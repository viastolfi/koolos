#ifndef EDGE_HPP
#define EDGE_HPP

#include "Shape.hpp"

class Edge : public Shape
{
public:
    Edge(Vector2 s, Vector2 e);
    std::vector<Vector2> draw() override;
private:
    Vector2 start;
    Vector2 end;
};

#endif // EDGE_HPP
