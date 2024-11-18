#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "Shape.hpp"
#include "Vector2.hpp"
#include "Colors.hpp"

class Image 
{
public:
    Image(std::string name, int h, int w);
    void draw(Shape* s);
    void generate();
    Vector2 getCenter();
    void setPixel(int x, int y, Color c);
private:
    std::string name;
    int height;
    int width;
    std::vector< std::vector< std::vector<int> > > pixels;
    std::vector<Shape*> shapes;
};

#endif // IMAGE_HPP
