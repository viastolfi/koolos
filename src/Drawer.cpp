#include "Drawer.hpp"

namespace koolos {

Drawer::Drawer()
  :cursor(Pixel(0, 0))
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

Drawer* Drawer::moveTo(Pixel p) {
  cursor = p;
  return this;
}

Drawer* Drawer::lineTo(Pixel p) {
  canva->addShape(new Edge(cursor, p, canva->stroke_color));  
  return this;
}

Drawer* Drawer::lineTo(Pixel p, Color c) {
  canva->addShape(new Edge(cursor, p, c));
  return this;
}

Canva* Drawer::getCanva() {
  return canva;
}

} // namespace koolos
