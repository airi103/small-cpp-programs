#include <iostream>
#include <cmath>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    double discriminant;
    double x1 = 0;
    double x2 = 0; 

    std::cout << "Enter coefficient a: ";
    std::cin >> a;
    std::cout << "Enter coefficient b: ";
    std::cin >> b;
    std::cout << "Enter coefficient c: ";
    std::cin >> c;

    discriminant = (b * b) - 4 * a * c;
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "x₁ is " << x1 << "\n";
        std::cout << "x₂ is " << x2 << "\n";
    }
    else if (discriminant == 0) {
        x1 = -b / (2 * a); 
        std::cout << "x is " << x1 << "\n";
    }
    else {
        std::cout << "No real solutions.\n";
    }
    
    return 0;
}
