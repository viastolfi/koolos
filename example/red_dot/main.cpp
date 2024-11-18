#include "koolos.hpp"

int main(int argc, char** argv)
{
    Image* i = new Image("red_dot.ppm", 50, 50);
    Vector2 imageCenter = i->getCenter();
    Shape* v = new Vertice(imageCenter);

    i->draw(v);
    i->generate();

    return 0;
}
