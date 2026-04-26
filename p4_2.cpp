#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Point& move(int dx, int dy) {
        x += dx;
        y += dy;
        return *this;
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

void update(Point* p) {
    p->move(10, 10);
}

int main() {
    Point p(1, 2);

    p.move(2, 3).move(-1, 4);  // chaining
    p.display();

    update(&p);  // pass by pointer
    p.display();

    return 0;
}