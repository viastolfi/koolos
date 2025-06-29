#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Shape.hpp"
#include "Vertice.hpp"
#include "Edge.hpp"

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

#endif // SQUARE_HPP
