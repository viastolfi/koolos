#include "Square.hpp"

Square::Square(Vertice s, Vertice e) 
    :Shape(), start(s), end(e)
{}

Square::Square(Vertice s, Vertice e, Color c) 
    :Shape(c), start(s), end(e)
{}

std::vector<Vector2> Square::draw()
{
    std::vector<Vector2> pixels;

    Vertice i = Vertice(end.x, start.y);
    Vertice j = Vertice(start.x, end.y);

    std::vector<Vertice> vs = {start, i, end, j};

    for (int idx = 0; idx < vs.size(); ++idx)
    {
        Edge e = Edge(vs[idx], vs[(idx+1) % vs.size()]);
        std::vector<Vector2> p = e.draw();

        for(auto pi : p)
        {
            pixels.push_back(pi); 
        }
    }

    return pixels;
}
