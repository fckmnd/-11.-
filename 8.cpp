class Rectangle : public Shape {
protected:
    double itsWidth;
    double itsHeight;

public:
    Rectangle(double width = 0.0, double height = 0.0)
        : itsWidth(width), itsHeight(height) {}

    virtual ~Rectangle() {}

    void SetWidth(double width) { itsWidth = width; }
    void SetHeight(double height) { itsHeight = height; }

    double GetWidth() const { return itsWidth; }
    double GetHeight() const { return itsHeight; }

    virtual double Area() const override {
        return itsWidth * itsHeight;
    }
};
