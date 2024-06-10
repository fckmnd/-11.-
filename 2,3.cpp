
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
        *itsRadius = *(other.itsRadius);
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



/*
завдання 3

SimpleCircle(const SimpleCircle& other) {
    itsRadius = new double(*(other.itsRadius));
}

*/
