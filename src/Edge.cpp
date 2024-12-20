#include "Edge.hpp"

Edge::Edge(Vertice s, Vertice e)
    :Shape(), start(s), end(e)
{}

Edge::Edge(Vertice s, Vertice e, Color c)
    :Shape(c), start(s), end(e)
{}

std::vector<Vector2> Edge::draw()
{
    std::vector<Vector2> pixels = {};
    if (end.x - start.x == 0)
    {
        int x = start.x;
        int sy = end.y - start.y > 0 ? start.y : end.y;
        int ey = sy == start.y ? end.y : start.y;
        for (int y = sy; y <= ey; ++y)
        {
            pixels.push_back(Vector2(x, y));    
        }
    }
    else
    {
        int x, y, dx, dy;
        int sx = end.x - start.x > 0 ? start.x : end.x;
        int sy = sx == start.x ? start.y : end.y;
        int ex = start.x == sx ? end.x : start.x;
        int ey = ex == end.x ? end.y : start.y;
        double e, e10, e01;

        dy = ey - sy;
        dx = ex - sx;
        y = sy;
        e = 0.0;
        e10 = (double) dy / dx;
        e01 = -1.0;

        for (x = sx; x <= ex; ++x)
        {
            pixels.push_back(Vector2(x, y)); 
            if ((e = e + e10) >= 0.5)
            {
                y = y + 1;
                e = e + e01;
            }
        } 
    }
    
    return pixels;
}
