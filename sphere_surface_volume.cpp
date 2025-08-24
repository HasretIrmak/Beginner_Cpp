#include <iostream>
using namespace std;

int main() {
    // Volume formula of a sphere: (4/3) * pi * r^3
    // Surface area formula of a sphere: 4 * pi * r^2
    // Get the radius (r) from the user and define area and volume
    // Define pi as a constant
    // Use float data type for calculations
    float Pi = 3.14;  // Define pi as a float constant
    float r, area, volume;  // Declare variables for radius, area, and volume
    cout << "Enter the radius: ";  // Prompt the user for the radius
    cin >> r;  // Read the input value for the radius
    area = 4 * Pi * (r * r);  // Calculate the surface area of the sphere
    volume = (4.0 / 3.0) * Pi * (r * r * r);  // Calculate the volume of the sphere
    cout << "Surface area is " << area << endl;  // Output the surface area
    cout << "Volume is " << volume << endl;  // Output the volume

    return 0;
}
