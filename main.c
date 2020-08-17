#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    argc--;
    argv++;

    if (argc == 2) {
        char* echo = "echo ";
        char* quote1 = "\'";
        char* text = argv[1];
        char* quote2 = "\'";
        char* arrow = " >> ";
        char* file = argv[0];

        char* command = malloc(strlen(echo) + strlen(quote1) + strlen(text) + strlen(quote2) + strlen(arrow) + strlen(file) + 1);

        strcat(command, echo);
        strcat(command, quote1);
        strcat(command, text);
        strcat(command, quote2);
        strcat(command, arrow);
        strcat(command, file);

        popen(command, "w");
    } else {
        printf(
            "Usage:\n\n    qw [file to write to] [text to write]\n\nQW writes a string to a file quickly, followed by a newline.\nWritten by genericrandom64 for the Shitty Software Suite\n");
    }
}