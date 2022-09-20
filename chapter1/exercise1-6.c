#include <stdio.h>

// Verify that getchar() != EOF is 0 or 1
// Found on page 17 of the book I'm using.

int main() {
    int c;


    // Verifying that it is a 1 when a character is entered
    printf("Enter a character and hit enter: ");
    c = getchar() != EOF;

    printf("The value of getchar() != EOF is %i\n\n", c);

    // Clearing out the newline that will still be hanging around
    c = getchar();

    // verifying that it is a 0 when a EOF is encountered.
    printf("Please press CTRL + D now\n");
    c = getchar() != EOF;
    printf("The value of getchar() != EOf is %i\n", c);
    return 0;
}
