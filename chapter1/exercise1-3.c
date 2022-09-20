#include <stdio.h>

// Modify the fahrenheit to celcius table to print a heading above the data
// Not the most graceful way to do it, but I just make the farenheit data
// be 10 characters long to match the amount of charcters in the word
// farenheit. Then added a tab between the two words/data fields.
// Found on page 13 of the book I'm using
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    // Lower limit of table
    upper = 300;  // upper limit of table
    step = 20;    // step size of table

    fahr = lower;

    printf("Fahrenheit\tCelsius\n");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%10.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
