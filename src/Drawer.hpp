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
private:
  Canva* canva;
};

} // namespace koolos

#endif // DRAWER_HPP
