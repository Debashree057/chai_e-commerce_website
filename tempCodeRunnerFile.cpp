#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Function to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }
};

int main() {
    // Create an object of the Rectangle class
    Rectangle myRectangle(5.0, 3.0);

    // Calculate the area using the class method
    double area = myRectangle.calculateArea();

    // Display the result
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}
