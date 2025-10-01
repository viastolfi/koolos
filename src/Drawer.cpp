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

} // namespace koolos
