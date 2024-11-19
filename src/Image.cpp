#include "Image.hpp"

Image::Image(std::string name, int w, int h)
    :name(name), height(h), width(w), pixels(h, std::vector<std::vector<int>>(w, std::vector<int>(3, 255))), shapes()
{}

void Image::draw(Shape* s) 
{
    shapes.push_back(s);
}

void Image::setPixel(int x, int y, Color c) {
    if (x < 0 || x >= width || y < 0 || y >= height)
        throw std::out_of_range("Pixel coordinates out of bounds");
    pixels[y][x][0] = c.r;
    pixels[y][x][1] = c.g;
    pixels[y][x][2] = c.b;
}

void Image::generate()
{
    std::ofstream file(name);
    if (!file)
        throw std::ios_base::failure("Failed to open file");

    for (const auto& s : shapes)
    {
        std::vector<Vector2> s_pixels = s->draw();

        for (const auto& p : s_pixels)
        {
            setPixel(p.x, p.y, s->getColor());
        }
    }

    file << "P3\n" << width << " " << height << "\n255\n";
    for (const auto& row : pixels) {
        for (const auto& pixel : row) {
            file << pixel[0] << " " << pixel[1] << " " << pixel[2] << " ";
        }
        file << "\n";
    }
    file.close();
}

Vector2 Image::getCenter()
{
    return Vector2(height/ 2, width / 2);
}
