#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Shape.hpp"
#include "Edge.hpp"

namespace koolos {

class Square : public Shape
{
public:
    Square(Pixel s, Pixel e);
    Square(Pixel s, Pixel e, Color c);
    std::vector<Pixel> draw() override;
private:
    Pixel start;
    Pixel end;
};

} // namespace koolos

#endif // SQUARE_HPP
