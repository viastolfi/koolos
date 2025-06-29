#include "Shape.hpp"

Shape::Shape()
    :stroke_color(Colors::BLACK)
{}

Shape::Shape(Color c)
    :stroke_color(c)
{}

Shape* Shape::fillColor(Color c)
{
    fill_color = c;
    return this;
}
