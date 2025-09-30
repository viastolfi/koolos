#include "Square.hpp"

namespace koolos {

Square::Square(Pixel s, Pixel e) 
    :Shape(), start(s), end(e)
{}

Square::Square(Pixel s, Pixel e, Color c) 
    :Shape(c), start(s), end(e)
{}

std::vector<Pixel> Square::draw()
{
    std::vector<Pixel> pixels;

    Pixel i = Pixel(end.x, start.y);
    Pixel j = Pixel(start.x, end.y);

    std::vector<Pixel> vs = {start, i, end, j};

    for (int idx = 0; (size_t) idx < vs.size(); ++idx)
    {
        Edge e = Edge(vs[idx], vs[(idx+1) % vs.size()], stroke_color);
        std::vector<Pixel> p = e.draw();
        pixels.insert(pixels.end(), p.begin(), p.end());
    }

    if (fill_color.has_value())
    {
        for (int i = start.x - 1; i <= end.x -1; ++i)
        {
            Edge e = Edge(Pixel(i, start.y - 1), Pixel(i, end.y - 1), fill_color.value());
            std::vector<Pixel> p = e.draw();
            pixels.insert(pixels.end(), p.begin(), p.end());
        }
    }
    return pixels;
}

} // namespace koolos
