#ifndef EDGE_HPP
#define EDGE_HPP

#include <cmath>

#include "Shape.hpp"
#include "Colors.hpp"

class Edge : public Shape
{
public:
    Edge(Pixel s, Pixel e);
    Edge(Pixel s, Pixel e, Color c);
    std::vector<Pixel> draw() override;
private:
    Pixel start;
    Pixel end;
};

#endif // EDGE_HPP
