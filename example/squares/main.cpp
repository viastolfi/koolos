#include "koolos.hpp"

using koolos::Colors;
using koolos::Pixel;

int main(int argc, char** argv)
{
    koolos::Image* i = new koolos::Image("squares.ppm", 1920, 1080);
    koolos::Shape* s1 = new koolos::Square(Pixel(400,400), Pixel(800,800), Colors::BLUE);
    koolos::Shape* s2 = new koolos::Square(Pixel(500,500), Pixel(900,900), Colors::RED);

    i->draw(s1);
    i->draw(s2); 

    i->generate();
}
