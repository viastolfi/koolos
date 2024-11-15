#include "koolos.hpp"

int main(int argc, char** argv)
{
    Image* i = new Image("red_dot.ppm", 50, 50);
    Vector2 imageCenter = i->getCenter();

    i->setPixel(imageCenter.x, imageCenter.y, 255, 0, 0);

    i->generate();

    return 0;
}
