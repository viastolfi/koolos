#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <vector>
#include <optional>

#include "Pixel.hpp"
#include "Colors.hpp"

class Shape
{
public:
    Shape();
    Shape(Color c);
    virtual std::vector<Pixel> draw() = 0;
    virtual ~Shape() = default;

    Shape* fillColor(Color c);
    Color stroke_color;
    std::optional<Color> fill_color;
private:
};

#endif // SHAPE_HPP
