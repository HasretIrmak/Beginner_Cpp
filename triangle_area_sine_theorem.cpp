#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Side lengths and the angle between the sides are required
    // The math library is needed for the sine function
    // Formula: area = (a * b * sin(angle)) / 2
    float side1, side2, angle, area;  // Declare variables for the two sides and the angle
    float Pi = 3.14;  // Define Pi for angle conversion
    cout << "Enter the length of side 1: ";  // Prompt the user for the first side
    cin >> side1;  // Read the input value for the first side
    cout << "Enter the length of side 2: ";  // Prompt the user for the second side
    cin >> side2;  // Read the input value for the second side
    cout << "Enter the angle between the sides (in degrees): ";  // Prompt the user for the angle
    cin >> angle;  // Read the input value for the angle
    area = (side1 * side2 * sin(angle * Pi / 180)) / 2;  // Calculate the area using the formula
    cout << "Area: " << area << endl;  // Output the calculated area

    return 0;
}
