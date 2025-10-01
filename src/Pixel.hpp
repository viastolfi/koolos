#ifndef VECTOR2_HPP 
#define VECTOR2_HPP

#include "Colors.hpp"

namespace koolos {

class Pixel
{
public:
    inline Pixel(int x, int y, Color c): x(x), y(y), color(c) {};
    inline Pixel(int x, int y) :x(x), y(y), color(Colors::BLACK) {};
    int x;
    int y;
    Color color;
};

inline bool operator==(Pixel p1, Pixel p2) {
  return p1.x == p2.x && p1.y == p2.y;
}

} // namespace koolos

#endif // VECTOR2_HPP
