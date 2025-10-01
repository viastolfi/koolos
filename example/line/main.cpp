#include "koolos.hpp"

using koolos::Colors;
using koolos::Pixel;

int main(int argc, char** argv)
{
    koolos::Image* i = new koolos::Image("line.ppm", 1920, 1080);
    koolos::Drawer* d = new koolos::Drawer();
  
    i->attachDrawer(d);

    d->strokeColor(Colors::BLUE);
    d->moveTo(Pixel(0,10))->lineTo(Pixel(100, 40));
    d->moveTo(Pixel(500, 200))->lineTo(Pixel(500, 800), Colors::RED);

    /*
     * this is the strict equivalent at what we were doing before but with more fancy and intuitive API
     * koolos::Shape* edge = new koolos::Edge(Pixel(0, 10), Pixel(100, 40));
     * koolos::Shape* edge2 = new koolos::Edge(Pixel(500, 200), Pixel(500, 800), Colors::RED);
    */
    
    i->generate();

    return 0;
}
