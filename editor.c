#include <fcntl.h>

void die(const char *s) {
    perror(s);
    exit(1);
}

void editorOpen(char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) die("open");

    char buffer[1024];
    int bytes_read = read(fd, buffer, sizeof(buffer));
    if (bytes_read == -1) die("read");

    write(STDOUT_FILENO, buffer, bytes_read);
    close(fd);
}

int main(int argc, char *argv[]) {
    enableRawMode();
    if (argc >= 2) {
        editorOpen(argv[1]);
    } else {
        printf("Usage: ./editor <filename>\n");
    }
    return 0;
}

