#ifndef EDGE_HPP
#define EDGE_HPP

#include <cmath>

#include "Shape.hpp"
#include "Colors.hpp"

namespace koolos {

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

} // namespace koolos

#endif // EDGE_HPP
