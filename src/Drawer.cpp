#include "Drawer.hpp"

namespace koolos {

Drawer::Drawer()
  :stroke_color(Colors::BLACK), fill_color(Colors::BLACK), cursor(Pixel(0, 0))
{
  canva = new Canva();
}

Drawer* Drawer::addPixel(Pixel p) {
  canva->addPixel(p);
  return this;
}

Drawer* Drawer::moveTo(Pixel p) {
  cursor = p;
  return this;
}

Drawer* Drawer::lineTo(Pixel p, std::optional<Color> c) {
  Color color = c.value_or(stroke_color);
  canva->addShape(new Edge(cursor, p, color));
  return this;
}

Canva* Drawer::getCanva() {
  return canva;
}

} // namespace koolos
