#include <conio.h>
#include <stdio.h>

int main() {
    char c;
    printf("Press keys (press 'q' to quit):\n");

    while (1) {
        c = _getch();  // Reads a key without echoing it
        if (c == 'q') break;
        printf("You pressed: %c\n", c);
    }

    return 0;
}
