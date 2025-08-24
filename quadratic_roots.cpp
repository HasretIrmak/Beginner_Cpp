#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Get coefficients for the quadratic equation from the user
    // Check for real roots using the discriminant
    // Discriminant formula: delta = b^2 - 4*a*c
    // If delta > 0, proceed to calculate the roots
    // Roots are calculated using: (-b ± sqrt(delta)) / (2*a)
    
    float a, b, c, delta, root1, root2;  // Declare variables for coefficients and roots
    cout << "Enter the coefficient of the quadratic term (a): ";  // Prompt for 'a'
    cin >> a;  // Read the value for 'a'
    cout << "Enter the coefficient of the linear term (b): ";  // Prompt for 'b'
    cin >> b;  // Read the value for 'b'
    cout << "Enter the constant term (c): ";  // Prompt for 'c'
    cin >> c;  // Read the value for 'c'

    // Calculate the discriminant and check for real roots
    delta = pow(b, 2) - 4 * a * c;  // Calculate delta
    if (delta > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(delta)) / (2 * a);  // First root
        root2 = (-b - sqrt(delta)) / (2 * a);  // Second root
        cout << "Root 1 is: " << root1 << endl;  // Output the first root
        cout << "Root 2 is: " << root2 << endl;  // Output the second root
    } else if (delta == 0) {
        // One real root (double root)
        cout << "There is only one root." << endl;
        root1 = (-b + sqrt(delta)) / (2 * a);  // Calculate the root
        cout << "The root is: " << root1 << endl;  // Output the root
    } else {
        // No real roots
        cout << "There are no real roots." << endl;  // Inform the user
    }

    return 0;
}
