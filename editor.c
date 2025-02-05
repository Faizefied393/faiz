#include <conio.h>
#include <stdio.h>

int main() {
    char c;
    printf("Press keys (press 'q' to quit):\n");

    while (1) {
        c = _getch();  // Reads key without echoing
        if (c == 'q') break;
        printf("ASCII: %d, Character: '%c'\n", c, c);
    }

    return 0;
}

