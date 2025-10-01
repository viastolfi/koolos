#ifndef CANVA_HPP
#define CANVA_HPP

#include "Shape.hpp"
#include "Pixel.hpp"
#include "Edge.hpp"

#include <vector>

namespace koolos {

class Canva : public Shape
{
public:
  Canva();
  std::vector<Pixel> draw() override;
  void addPixel(Pixel p);
  void addShape(Shape* s);
private:
  std::vector<Shape*> shapes;
  std::vector<Pixel> vertices;
};
  
} // namespace koolos

#endif // CANVA_HPP
