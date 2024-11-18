#include "Edge.hpp"

Edge::Edge(Vector2 s, Vector2 e)
    :Shape(), start(s), end(e)
{}

Edge::Edge(Vector2 s, Vector2 e, Color c)
    :Shape(c), start(s), end(e)
{}

std::vector<Vector2> Edge::draw()
{
    std::vector<Vector2> pixels = {};
    int x, y, dx, dy;
    double e, e10, e01;

    dy = end.y - start.y;
    dx = end.x - start.x;
    y = start.y;
    e = 0.0;
    e10 = (double) dy / dx;
    e01 = -1.0;

    for (x = start.x; x <= end.x; ++x)
    {
        pixels.push_back(Vector2(x, y)); 
        if ((e = e + e10) >= 0.5)
        {
            y = y + 1;
            e = e + e01;
        }
    } 

    return pixels;
}
