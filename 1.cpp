
class SimpleCircle {
private:
    double itsRadius;

public:
    SimpleCircle(double radius = 0.0) : itsRadius(radius) {}
    double GetRadius() const {
        return itsRadius;
    }
    SimpleCircle& operator++() {
        ++itsRadius;
        return *this;
    }
    SimpleCircle operator++(int) {
        SimpleCircle temp = *this;
        itsRadius++;
        return temp;
    }
};


