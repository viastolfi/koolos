#ifndef VERTICE_HPP
#define VERTICE_HPP

namespace koolos {

class Vertice
{
public:
    inline Vertice(int x, int y): x(x), y(y), def(Pixel(x, y)) {};
    int x;
    int y;
    Pixel def;
};

} // namespace koolos

#endif // VERTICE_HPP
