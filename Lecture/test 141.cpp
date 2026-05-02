#include <iostream>

// Function to perform the addition
int sum_two_numbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int result;

    // Call the function to get the sum
    result = sum_two_numbers(num1, num2);

    // Print the result to the console
    std::cout << "The first number is: " << num1 << std::endl;
    std::cout << "The second number is: " << num2 << std::endl;
    std::cout << "The sum of the two numbers is: " << result << std::endl;

    return 0;
}