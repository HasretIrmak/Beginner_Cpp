#include <iostream>
using namespace std;

int main() {
    // Get the base and height from the user and display the area
    // Triangle area formula: (height * length of base) / 2
    float base, height, area;  // Declare variables for base, height, and area
    cout << "Enter the height: ";  // Prompt the user for the height
    cin >> height;  // Read the input value for height
    cout << "Enter the base: ";  // Prompt the user for the base
    cin >> base;  // Read the input value for the base
    area = (base * height) / 2;  // Calculate the area of the triangle
    cout << "The area of the triangle is: " << area << endl;  // Output the calculated area

    return 0;
}
