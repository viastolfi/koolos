#ifndef EDGE_HPP
#define EDGE_HPP

#include "Shape.hpp"
#include "Colors.hpp"

class Edge : public Shape
{
public:
    Edge(Vector2 s, Vector2 e);
    Edge(Vector2 s, Vector2 e, Color c);
    std::vector<Vector2> draw() override;
private:
    Vector2 start;
    Vector2 end;
};

#endif // EDGE_HPP
