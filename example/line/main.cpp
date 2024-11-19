#include "koolos.hpp"

int main(int argc, char** argv)
{
    Image* i = new Image("line.ppm", 1920, 1080);

    // Edge(Vector2 startPos, Vector2 endPos)
    Shape* edge = new Edge(Vertice(0, 10), Vertice(100, 40));
    Shape* edge2 = new Edge(Vertice(500, 200), Vertice(500, 800), Colors::RED);
    
    i->draw(edge); 
    i->draw(edge2);
    i->generate();

    return 0;
}
