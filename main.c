#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    argc--;
    argv++;

    if (argc == 2) {
        char new[65535] = "\n";
        strcat(argv[1], new);
        FILE *door;
        door = fopen(argv[0], "a+");
        fprintf(door, "%s", argv[1]);
        fclose(door); // you better believe i changed every instance of the variable to door just for the joke
    } else {
        printf(
            "Usage:\n\n    qw [file to write to] [text to write]\n\nQW writes a string to a file quickly, followed by a newline.\nWritten by genericrandom64 for the Shitty Software Suite\n");
    }
}