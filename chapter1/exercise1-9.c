#include <stdio.h>

// Write a program to copy it's input to it's output, replacing each string
// of one or more blanks (spaces) by a single blank.
// I've also added in the same for tabs just for fun.
// On page 20 of the book I'm following.


#define FINDING_SPACING 1
#define SPACE_SET 0

int main() {
    int c;
    int operation;

    while ((c = getchar()) != EOF) {
        // Find out whether or not we're dealing with tabs/spaces
        if (c == '\t' || c == ' ') {
            operation = FINDING_SPACING;
        }
        else {
            if (operation == FINDING_SPACING) {
                putchar(' ');
                operation = SPACE_SET;
            }
            putchar(c);
        }
    }
    return 0;
}
