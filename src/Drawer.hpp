#ifndef DRAWER_HPP
#define DRAWER_HPP

#include "Canva.hpp"

namespace koolos {

class Drawer {
public: 
  Drawer();
  Drawer* strokeColor(Color c);

  Drawer* fillColor(Color c);
  Drawer* addPixel(Pixel p);
  Canva* getCanva();

  Drawer* moveTo(Pixel p);

  Drawer* lineTo(Pixel p);
  Drawer* lineTo(Pixel p, Color c);
private:
  Canva* canva;
  Pixel cursor;
};

} // namespace koolos

#endif // DRAWER_HPP
