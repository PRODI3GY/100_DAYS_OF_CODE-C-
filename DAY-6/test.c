#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char input[MAX_SIZE];

    printf("Enter a line of text (press Enter to finish):\n");

    // Read characters until encountering a newline
    scanf(" %[^\n]", input);

    printf("Input captured: %s\n", input);

    return 0;
}
