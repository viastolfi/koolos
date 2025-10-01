#include "koolos.hpp"

using koolos::Colors;
using koolos::Pixel;

int main(int argc, char** argv) {
  koolos::Image* i = new koolos::Image("canva.ppm", 200, 200);
  koolos::Drawer* d = new koolos::Drawer();
  d->strokeColor(Colors::GREEN)->addPixel(Pixel(1,1))->addPixel(Pixel(1, 199))->addPixel(Pixel(199, 1));

  i->attachDrawer(d);

  i->draw();
  i->generate();

  delete d;
  delete i;

  return 0;
}
