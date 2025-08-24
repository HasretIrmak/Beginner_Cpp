#include <iostream>
using namespace std;

int main() {
    // Get two numbers from the user and compare them
    // Handle cases for greater than, less than, and equal
    int a, b;  // Declare variables for the two numbers
    cout << "Enter the first number: ";  // Prompt the user for the first number
    cin >> a;  // Read the input value for the first number
    cout << "Enter the second number: ";  // Prompt the user for the second number
    cin >> b;  // Read the input value for the second number

    // Compare the two numbers and display the result
    if (a > b) {
        cout << a << " is greater than " << b << endl;  // a is greater than b
    } else if (b > a) {
        cout << b << " is greater than " << a << endl;  // b is greater than a
    } else {
        cout << a << " and " << b << " are equal" << endl;  // a is equal to b
    }

    return 0;
}
