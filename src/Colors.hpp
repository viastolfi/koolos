#ifndef COLORS_HPP
#define COLORS_HPP

namespace koolos {

class Color
{
public:
    Color(int r, int g, int b) : r(r), g(g), b(b) {}
    int r, g, b;
};

class Colors
{
public:
    static const Color BLACK;
    static const Color RED;
    static const Color GREEN;
    static const Color BLUE;
};

} // namespace koolos

#endif // COLORS_HPP

