#include <stdio.h>

int main() {
    char ch;

    // Using a while loop to print the alphabet from 'z' to 'a'
    ch = 'z';
    while (ch >= 'a') {
        printf("%c ", ch);
        ch--;
    }
    printf("\n");

    // Using a do-while loop to print the alphabet from 'z' to 'a'
    ch = 'z';
    do {
        printf("%c ", ch);
        ch--;
    } while (ch >= 'a');
    printf("\n");

    // Using a for loop to print the alphabet from 'z' to 'a'
    for (ch = 'z'; ch >= 'a'; ch--) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}
