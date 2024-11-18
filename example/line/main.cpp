#include "koolos.hpp"

int main(int argc, char** argv)
{
    Image* i = new Image("line.ppm", 50, 50);

    // Edge(Vector2 startPos, Vector2 endPos)
    Shape* edge = new Edge(Vector2(10,7), Vector2(42, 23));
    
    i->draw(edge); 
    i->generate();

    return 0;
}
