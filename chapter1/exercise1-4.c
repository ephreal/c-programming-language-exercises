#include <stdio.h>

// Create a celsius to fahrenheit table that mirrors exercise 1-3
// Found on page 13 of the book I'm using.
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  // lower bound for the table
    upper = 300;  // upper bound for the table
    step = 20;   // size of steps on the table

    printf("Celsius\tFarhenheit\n");

    celsius = lower;

    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%7.0f\t%10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
