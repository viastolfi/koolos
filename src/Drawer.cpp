#include "Drawer.hpp"

namespace koolos {

Drawer::Drawer()
{
  canva = new Canva();
}

Drawer* Drawer::fillColor(Color c) {
  canva->fill_color = c;
  return this;
}

Drawer* Drawer::strokeColor(Color c) {
  canva->stroke_color = c;
  return this;
}

Drawer* Drawer::addPixel(Pixel p) {
  canva->addPixel(p);
  return this;
}

Canva* Drawer::getCanva() {
  return canva;
}

} // namespace koolos
