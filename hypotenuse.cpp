#include<iostream>
#include<cmath>

int main() {
    double a, b;
    std::cout << "Enter the lengths of the two sides of the right triangle: ";
    std::cin >> a >> b;
    double h = std::sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The length of the hypotenuse is: " << h << std::endl;
    return 0;
}