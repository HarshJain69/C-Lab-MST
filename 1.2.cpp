//Implement a C++ program to demonstrate the concept of inheritance by creating a base class called "Shape" and derived classes "Rectangle" and "Circle". The base class should have common data members and functions to calculate area and perimeter, while the derived classes should override these functions with specific implementations for each shape.
#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
    double area;
    double perimeter;

public:
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;

    void display() {
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void calculateArea() override {
        area = length * width;
    }

    void calculatePerimeter() override {
        perimeter = 2 * (length + width);
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea() override {
        area = M_PI * radius * radius;
    }

    void calculatePerimeter() override {
        perimeter = 2 * M_PI * radius;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rectangle(4, 6);
    rectangle.calculateArea();
    rectangle.calculatePerimeter();

    cout << "Rectangle:" << endl;
    rectangle.display();
    cout << endl;

    // Create a Circle object
    Circle circle(3);
    circle.calculateArea();
    circle.calculatePerimeter();

    cout << "Circle:" << endl;
    circle.display();

    return 0;
}
