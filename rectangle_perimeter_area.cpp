#include <iostream>
using namespace std;

int main() {
    // Get the lengths of the rectangle's sides from the user
    // Define two variables for the sides, and also define variables for perimeter and area
    int length1, length2, area, perimeter;  // Declare variables for the lengths, area, and perimeter
    cout << "Enter the length of one side of the rectangle: ";  // Prompt the user for the first side length
    cin >> length1;  // Read the input value for the first side
    cout << "Enter the length of the second side: ";  // Prompt the user for the second side length
    cin >> length2;  // Read the input value for the second side
    perimeter = 2 * (length1 + length2);  // Calculate the perimeter of the rectangle
    area = length1 * length2;  // Calculate the area of the rectangle
    cout << "Perimeter is " << perimeter << endl;  // Output the perimeter
    cout << "Area is " << area << endl;  // Output the area

    return 0;
}
