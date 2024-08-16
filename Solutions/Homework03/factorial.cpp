/**
 * @file factorial.cpp
 * @author A Abdalla
 * @brief This program calculates the factorial of an integer using recursion.
 * @description The program defines a function called `calculateFactorial` that takes an integer `n` as a parameter.
 * The function recursively calculates the factorial of `n` by multiplying `n` with the factorial of `n-1`.
 * The result is then returned and printed to the console.
 * @date 2023-08-13
 */

#include <iostream>
using namespace std;

/**
 * @brief Calculates the factorial of an integer using recursion.
 * @param n The integer whose factorial needs to be calculated.
 * @return The factorial of the input integer.
 */
int calculateFactorial(int n) {
    // Base case: the factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: the factorial of n is n * the factorial of n-1
    return n * calculateFactorial(n - 1);
}

int main() {
    // Prompt the user to enter an integer
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Calculate the factorial of the input number using the calculateFactorial function
    int factorial = calculateFactorial(number);

    // Print the result to the console
    cout << "The factorial of " << number << " is: " << factorial << endl;

    return 0;
}