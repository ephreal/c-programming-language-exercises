#include <stdio.h>

// Write a program to count blanks (spaces), tabs, and newlines
// found on page 20 of the book I'm using
int main() {
    int tabs = 0;
    int newlines = 0;
    int spaces = 0;
    int others = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            tabs++;
        }
        else if (c == '\n') {
            newlines++;
        }
        else if (c == ' ') {
            spaces++;
        }
        else {
            others++;
        }
    }

    printf("Tabs:     %i\n", tabs);
    printf("Spaces:   %i\n", spaces);
    printf("Newlines: %i\n", newlines);
    printf("Others:   %i\n", others); 
}
