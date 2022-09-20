#include <stdio.h>

// Write a program to copy it's input to it's output, replacing each tab
// by \t, each backspace by \b, and each backslash by \\. This makes
// tabs and backspaces in an unambiguous way.
// Found on page 20 of the book I'm following.


// Note that I'm only implementint the tab changing here since catching
// the live input doesn't seem to work for me. This way, I can easily
// pipe a file to this and replace the items as needed.
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else {
            putchar(c);
        }
    }
}
