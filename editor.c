typedef struct {
    int size;
    char *content;
} EditorBuffer;

EditorBuffer E;

void editorOpen(char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) die("fopen");

    fseek(fp, 0, SEEK_END);
    E.size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    E.content = malloc(E.size + 1);
    fread(E.content, 1, E.size, fp);
    fclose(fp);

    write(STDOUT_FILENO, E.content, E.size);
}
