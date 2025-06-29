#include "koolos.hpp"

int main(int argc, char** argv)
{
    Image* i = new Image("fill_square.ppm", 1920, 1080);
    Shape* s = new Square(Pixel(100, 100), Pixel(400, 400), Colors::BLUE);
    s->fillColor(Colors::GREEN);

    i->draw(s);

    i->generate();

    delete s;
    delete i;

    return 0;
}
