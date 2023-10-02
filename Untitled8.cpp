#include <stdio.h>

// Declare a function called 'fact' that takes an integer as input and returns an integer.
int fact(int);

// The main function where our program starts.
int main() {
    // Declare a variable 'num' and set it to 3.
    int num = 3;
    
    // Declare a variable 'result' to store the factorial value.
    int result;
    
    // Call the 'fact' function with the 'num' as an input, and store the result.
    result = fact(num);
    
    // Print the original number and its factorial.
    printf("%d factorial is %d\n", num, result);
    
    // Indicate that the program executed successfully.
    return 0;
}

// Define the 'fact' function.
int fact(int num) {
    // Check if the input number is 0.
    if (num == 0) {
        // If it's 0, return 1 (factorial of 0 is defined as 1).
        return 1;
    } else {
        // If it's not 0, calculate the factorial using recursion.
        // The factorial of 'num' is 'num' multiplied by the factorial of 'num - 1'.
        return num * fact(num - 1);
    }
}

