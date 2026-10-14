
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

// Copyright 2026 Vova Muzychko
// Ellipse Calculator

int main() {
    double a;
    double b;
    const double kPi = 3.14159;
    const std::string kSeparator =
        "============================================================";
    double area;
    double term1;
    double term2;
    double perimeter;
    std::string units;

    std::cout << kSeparator << '\n';
    std::cout << "Welcome to the Ellipse Calculator!\n";
    std::cout << kSeparator << '\n';
    std::cout << "This program calculates the Area and Perimeter of an";
    std::cout << " ellipse using its two unique dimensions\n";
    std::cout << "- Semi-major axis (a)\n";
    std::cout << "- Semi-minor axis (b)\n";
    std::cout << "Let's begin!\n";
    std::cout << kSeparator << '\n';

    // Get the measurements
    std::cout << "Enter the semi-major axis:(a) ";
    std::cin >> a;

    std::cout << "Enter the semi-minor axis:(b) ";
    std::cin >> b;

    std::cout << "Enter the units (cm, m, mm): ";
    std::cin >> units;

    // Check the measurements
    if (a <= 0 || b <= 0) {
        std::cout << "Error: Axes must be greater than zero.\n";
    } else {
        // Calculate the area
        area = kPi * a * b;

        // Calculate the perimeter
        term1 = 3 * (a + b);
        term2 = std::sqrt((3 * a + b) * (a + 3 * b));
        perimeter = kPi * (term1 - term2);

        // Show the results
        std::cout << std::fixed << std::setprecision(2);

        std::cout << "Area: " << area << " square " << units << "\n";
        std::cout << "Perimeter: " << perimeter << " " << units << "\n";
    }

    return 0;
}
