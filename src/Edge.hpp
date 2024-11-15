#ifndef EDGE_HPP
#define EDGE_HPP

class Edge
{
public:
    inline Edge(Vector2 s, Vector2 e) :start(s), end(e) {};
private:
    Vector2 start;
    Vector2 end;
};

#endif // EDGE_HPP
