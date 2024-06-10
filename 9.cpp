#include <iostream>

class Shape {
public:
    Shape() {}
    virtual ~Shape() {}

    virtual double Area() const = 0;
};

class Rectangle : public Shape {
protected:
    double itsLength;
    double itsWidth;

public:
    Rectangle(double length = 0.0, double width = 0.0)
        : itsLength(length), itsWidth(width) {}

    virtual ~Rectangle() {}

    void SetLength(double length) { itsLength = length; }
    void SetWidth(double width) { itsWidth = width; }

    double GetLength() const { return itsLength; }
    double GetWidth() const { return itsWidth; }

    virtual double Area() const override {
        return itsLength * itsWidth;
    }
};

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}

    void SetSide(double side) {
        itsLength = side;
        itsWidth = side;
    }

    double GetSide() const {
        return itsLength;
    }

    virtual double Area() const override {
        return itsLength * itsLength;
    }
};

int main() {
    Square sq(5.0);

    std::cout << "Side of the square: " << sq.GetSide() << std::endl;
    std::cout << "Area of the square: " << sq.Area() << std::endl;

    sq.SetSide(7.0);

    std::cout << "Updated side of the square: " << sq.GetSide() << std::endl;
    std::cout << "Updated area of the square: " << sq.Area() << std::endl;

    return 0;
}
