#include "koolos.hpp"

using koolos::Colors;
using koolos::Pixel;

int main(int argc, char** argv)
{
    koolos::Image* i = new koolos::Image("fill_square.ppm", 1920, 1080);
    koolos::Shape* s = new koolos::Square(Pixel(100, 100), Pixel(400, 400), Colors::BLUE);
    s->fillColor(Colors::GREEN);

    i->draw(s);

    i->generate();

    delete s;
    delete i;

    return 0;
}
