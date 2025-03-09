CC=gcc
CFLAGS=-Wall -Wextra -pedantic -std=c99
SRC=editor.c
OUT=editor

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
