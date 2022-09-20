#include <stdio.h>

// Exercise 1-2 merely wants to know what happens if the printed string
// contains some escaped characters other than "\n".
// Note that since many of these are invalid escape charaters, you WILL
// get a bunch of errors when compiling this.
// Found on page 8 of the book I'm using
int main() {
    printf("Hello world!\n");
    printf("Hello\tworld!\n");
    printf("\cHello\c World!\n");
    printf("\g\t\r\d\s\a\h\j\y\f\vHello World!\n");
    return 0;
}
