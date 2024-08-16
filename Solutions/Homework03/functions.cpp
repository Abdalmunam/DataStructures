/**
 * @file function.cpp
 * @author A Abdalla
 * @brief This program demonstrates swapping the values of two integers using pointers.
 * @description The program defines a function called `swapValues` that takes two integer pointers as parameters.
 * The function swaps the values of the two integers pointed to by the input pointers.
 * The swapped values are then printed to the console.
 * @date 2023-08-13
 */

#include <iostream>
using namespace std;

/**
 * @brief Swaps the values of two integers using pointers.
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void swapValues(int* a, int* b) {
    // Store the value of the first integer in a temporary variable
    int temp = *a;
    // Assign the value of the second integer to the first integer
    *a = *b;
    // Assign the value of the temporary variable to the second integer
    *b = temp;
}

int main() {
    // Declare and initialize two integers
    int x = 10;
    int y = 20;

    // Print the initial values
    cout << "Before swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;

    // Call the swapValues function and pass the addresses of x and y
    swapValues(&x, &y);

    // Print the swapped values
    cout << "After swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
