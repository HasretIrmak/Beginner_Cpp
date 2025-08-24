#include <iostream>
using namespace std;

int main() {
    // Take input from the user by defining a variable
    // Check if the number is even or odd
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0)
        cout << number << " is even";
    else
        cout << number << " is odd";

    return 0;
}
