#include "koolos.hpp"

using koolos::Colors;
using koolos::Pixel;

int main(int argc, char** argv)
{
    koolos::Image* i = new koolos::Image("line.ppm", 1920, 1080);

    koolos::Shape* edge = new koolos::Edge(Pixel(0, 10), Pixel(100, 40));
    koolos::Shape* edge2 = new koolos::Edge(Pixel(500, 200), Pixel(500, 800), Colors::RED);
    
    i->draw(edge); 
    i->draw(edge2);
    i->generate();

    return 0;
}
