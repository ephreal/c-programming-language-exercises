#include <stdio.h>

// Modify the temperature conversion program to print in reverse order
// Using the simplified for-loop version on page 13.
// I've added in a header for clarity.
// Found on page 14 of the book I'm using

int main() {
    int fahr;

    printf("Fahrenheit\tCelsius\n");

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%10.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}
