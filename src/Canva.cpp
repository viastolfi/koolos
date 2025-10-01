#include "Canva.hpp"

namespace koolos {

Canva::Canva()
{}

void Canva::addPixel(Pixel p) {
  vertices.push_back(p);
}

void Canva::addShape(Shape* s) {
  shapes.push_back(s);
}

std::vector<Pixel> Canva::draw() {
  std::vector<Pixel> pixels;

  for(auto s : shapes) {
    std::vector<Pixel> p = s->draw();
    pixels.insert(pixels.end(), p.begin(), p.end());
  }

  for(size_t i = 0; i < vertices.size(); ++i) {
    Pixel p = vertices[i];
    if (p == vertices.back()) {
      Edge e = Edge(p, vertices.front(), stroke_color);
      std::vector<Pixel> p = e.draw();
      pixels.insert(pixels.end(), p.begin(), p.end());
    } else {
      Edge e = Edge(p, vertices[i + 1], stroke_color);
      std::vector<Pixel> p = e.draw();
      pixels.insert(pixels.end(), p.begin(), p.end());
    }
  }

  return pixels;
}
  
}
