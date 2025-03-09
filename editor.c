void editorSearch(char *query) {
    char *match = strstr(E.content, query);
    if (match) {
        int pos = match - E.content;
        printf("Found at position: %d\n", pos);
    }
}

