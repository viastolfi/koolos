#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "Shape.hpp"
#include "Pixel.hpp"
#include "Colors.hpp"
#include "Drawer.hpp"

namespace koolos {

class Image 
{
public:
    Image(std::string name, int w, int h);
    void attachDrawer(Drawer* d);

    void draw();
    void draw(Shape* s);

    void generate();
    Pixel getCenter();
    void setPixel(int x, int y, Color c);
private:
    std::string name;
    int height;
    int width;
    std::optional<Drawer*> drawer;
    std::vector< std::vector< std::vector<int> > > pixels;
    std::vector<Shape*> shapes;
};

} // namespace koolos

#endif // IMAGE_HPP
