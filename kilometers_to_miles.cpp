#include <iostream>
using namespace std;

int main() {
    // Conversion factor: 1 mile = 0.621 kilometers
    // Take input from the user in kilometers, so define variables for kilometers and miles
    float mile, km;  // Declare variables for miles and kilometers
    cout << "Enter the number of kilometers that you want to convert to miles: ";  // Prompt the user for input
    cin >> km;  // Read the input value for kilometers
    mile = 0.621 * km;  // Convert kilometers to miles using the conversion factor
    cout << km << " kilometers is converted to miles! The result is " << mile << " miles." << endl;  // Output the result

    return 0;
}
