#include <stdio.h>

int main() {
    int i = 0;

    // Using a while loop to print "HAPPY BIRTHDAY" 100 times
    while (i < 100) {
        printf("HAPPY BIRTHDAY\n");
        i++;
    }

    i = 0; // Reset the counter for the next loop

    // Using a do-while loop to print "HAPPY BIRTHDAY" 100 times
    do {
        printf("HAPPY BIRTHDAY\n");
        i++;
    } while (i < 100);

    // Using a for loop to print "HAPPY BIRTHDAY" infinitely
    for (;;) {
        printf("HAPPY BIRTHDAY\n");
    }

    return 0;
}
