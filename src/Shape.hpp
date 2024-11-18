#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <vector>

#include "Vector2.hpp"

class Shape
{
public:
    Shape();
    virtual std::vector<Vector2> draw() = 0;
};

#endif // SHAPE_HPP
