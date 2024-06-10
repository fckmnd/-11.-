#include <iostream>

class SimpleCircle {
private:
    double* itsRadius;

public:
    SimpleCircle(double radius = 0.0) {
        itsRadius = new double(radius);
    }

    SimpleCircle(const SimpleCircle& other) {
        itsRadius = new double(*(other.itsRadius));
    }

    SimpleCircle& operator=(const SimpleCircle& other) {
        if (this == &other) return *this; 
        delete itsRadius;

        itsRadius = new double(*(other.itsRadius));
        return *this;
    }

    ~SimpleCircle() {
        delete itsRadius;
    }

    double GetRadius() const {
        return *itsRadius;
    }

    SimpleCircle& operator++() {
        ++(*itsRadius);
        return *this;
    }

    SimpleCircle operator++(int) {
        SimpleCircle temp = *this;
        (*itsRadius)++;
        return temp;
    }
};

int main() {
    SimpleCircle circle1;        
    SimpleCircle circle2(9.0);   

    ++circle1;
    circle2++;

    std::cout << "Radius of circle1 after pre-increment: " << circle1.GetRadius() << std::endl;
    std::cout << "Radius of circle2 after post-increment: " << circle2.GetRadius() << std::endl;

    circle1 = circle2;

    std::cout << "Radius of circle1 after assignment: " << circle1.GetRadius() << std::endl;
    std::cout << "Radius of circle2 remains: " << circle2.GetRadius() << std::endl;

    return 0;
}
