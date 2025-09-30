#include "koolos.hpp"

int main(int argc, char** argv)
{
    Image* i = new Image("line.ppm", 1920, 1080);

    Shape* edge = new Edge(Pixel(0, 10), Pixel(100, 40));
    Shape* edge2 = new Edge(Pixel(500, 200), Pixel(500, 800), Colors::RED);
    
    i->draw(edge); 
    i->draw(edge2);
    i->generate();

    return 0;
}
