#ifndef DRAWER_HPP
#define DRAWER_HPP

#include <optional>

#include "Canva.hpp"

namespace koolos {

class Drawer {
public: 
  Drawer();

  Drawer* addPixel(Pixel p);
  Canva* getCanva();

  Drawer* moveTo(Pixel p);

  Drawer* lineTo(Pixel p, std::optional<Color> c = std::nullopt);

  Color stroke_color;
  Color fill_color;
private:
  Canva* canva;
  Pixel cursor;
};

} // namespace koolos

#endif // DRAWER_HPP
