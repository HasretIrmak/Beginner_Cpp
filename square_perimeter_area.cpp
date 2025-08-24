
#include <iostream>
using namespace std;

int main() {
    // Ask the user for the length of the square's side
    // Define a variable to store the input
    // Calculate and print the perimeter and area of the square
    int length, perimeter, area;  // Declare variables for length, perimeter, and area
    cout << "Please enter the length of the square's side: ";  // Prompt the user for input
    cin >> length;  // Read the input value for the length
    perimeter = 4 * length;  // Calculate the perimeter of the square
    area = length * length;  // Calculate the area of the square
    cout << "Perimeter is " << perimeter << endl;  // Output the perimeter
    cout << "Area is " << area << endl;  // Output the area

    return 0;
}
