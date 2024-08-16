/**
 * @file array.cpp
 * @author A Abdalla
 * @brief This program calculates the average of an array of 10 integers.
 * @description The program uses a function called `calculateAverage` that takes an array of integers and the size of the array as parameters.
 * The function calculates the average by summing up all the elements in the array and dividing the sum by the size of the array.
 * The result is then returned and printed to the console.
 * @date 2023-08-13
 */

#include <iostream>
using namespace std;

/**
 * @brief Calculates the average of an array of integers.
 * @param numbers The array of integers.
 * @param size The size of the array.
 * @return The average of the numbers in the array.
 */
double calculateAverage(int numbers[], int size) {
    int sum = 0;
    // Iterate through the array and add each element to the sum
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    // Calculate the average by dividing the sum by the size of the array
    return static_cast<double>(sum) / size;
}

int main() {
    // Declare and initialize an array of 10 integers
    int nums[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    // Call the calculateAverage function and store the result in the average variable
    double average = calculateAverage(nums, 10);
    // Print the average to the console
    cout << "The average of the numbers is: " << average << endl;
    return 0;
}