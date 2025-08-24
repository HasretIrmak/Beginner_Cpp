#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Take input from the user for the sides of the triangle
    // Hypotenuse formula: side1^2 + side2^2 = hypotenuse^2
    // Use the square root function to calculate the hypotenuse
    float side1, side2, hypotenuse;  // Declare variables for the two sides and the hypotenuse
    cout << "Enter side 1: ";  // Prompt the user for the first side
    cin >> side1;  // Read the input value for the first side
    cout << "Enter side 2: ";  // Prompt the user for the second side
    cin >> side2;  // Read the input value for the second side
    hypotenuse = sqrt(side1 * side1 + side2 * side2);  // Calculate the hypotenuse using the Pythagorean theorem
    cout << "Calculated! Hypotenuse is: " << hypotenuse << endl;  // Output the calculated hypotenuse

    return 0;
}
