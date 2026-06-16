#include <iostream>

int main() {
    double celsius, fahrenheit;

    // Ask the user for input
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    // Apply the conversion formula
    // Note: Using 9.0 / 5.0 ensures floating-point division instead of integer division
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Display the result
    std::cout << celsius << "°C is equal to " << fahrenheit << "°F" << std::endl;

    return 0;
}