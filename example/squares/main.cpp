#include "koolos.hpp"

int main(int argc, char** argv)
{
    Image* i = new Image("squares.ppm", 1920, 1080);
    Shape* s1 = new Square(Vertice(400,400), Vertice(800,800), Colors::BLUE);
    Shape* s2 = new Square(Vertice(500,500), Vertice(900,900), Colors::RED);

    i->draw(s1);
    i->draw(s2); 

    i->generate();
}
