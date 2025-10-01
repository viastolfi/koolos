#include "Canva.hpp"

namespace koolos {

Canva::Canva()
{}

void Canva::addPixel(Pixel p) {
  vertices.push_back(p);
}

std::vector<Pixel> Canva::draw() {
  std::vector<Pixel> pixels;

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
