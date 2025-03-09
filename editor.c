int main() {
    enableRawMode();

    char c;
    while (read(STDIN_FILENO, &c, 1) == 1) {
        if (c == 'q') break;
        printf("%c\r\n", c);
    }

    return 0;
}
