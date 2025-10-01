#ifndef CANVA_HPP
#define CANVA_HPP

#include "Shape.hpp"
#include "Pixel.hpp"

#include <vector>

namespace koolos {

class Canva : public Shape
{
public:
  Canva();
  std::vector<Pixel> draw() override;
private:
  std::vector<Pixel> vertices;
};
  
} // namespace koolos

#endif // CANVA_HPP
