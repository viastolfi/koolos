#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <vector>

#include "Vector2.hpp"
#include "Colors.hpp"

class Shape
{
public:
    Shape();
    Shape(Color c);
    virtual std::vector<Vector2> draw() = 0;
    virtual ~Shape() = default;

    inline Color getColor() { return c;};
private:
    Color c;
};

#endif // SHAPE_HPP
