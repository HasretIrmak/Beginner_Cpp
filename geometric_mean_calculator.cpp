#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // CALCULATING THE GEOMETRIC MEAN OF ENTERED NUMBERS 
    // Formula: Geometric Mean = (a * b * c * d)^(1/n)
    // The user will enter n numbers
    // These numbers will be multiplied together 
    // The result will be the nth root of the product of the numbers
    int n;  // Number of inputs from the user
    int number;  // Number entered by the user
    float product = 1;  // Initial value for the product
    float result;  // Result for the geometric mean

    cout << "How many numbers will you enter? ";
    cin >> n;  // Get the number of inputs from the user

    for (int j = 1; j <= n; j++) {
        cout << "Enter a number: ";
        cin >> number;  // Get the number from the user
        product *= number;  // Multiply the numbers
    }

    result = pow(product, 1.0 / n);  // Calculate the geometric mean
    cout << "Your result: " << result << endl;  // Print the result

    return 0;
}
