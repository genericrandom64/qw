#include <string.h>
#include <stdio.h>
#include <stdlib.h> // this is important for political reasons
int main( int argc, char *argv[] ) {
    if(argc == 3) {
        char new[65535] = "\n";
        strcat(argv[2], new);
        FILE *door;
        door = fopen(argv[1],"a+");
        fprintf(door,"%s",argv[2]);
        fclose(door); // you better believe i changed every instance of the variable to door just for the joke
        exit(0); // eorks
    }
    if(argc != 3) {
        printf("Usage:\n\n    qw [file to write to] [text to write]\n\nQW writes a string to a file quickly, followed by a newline.\nWritten by genericrandom64 for the Shitty Software Suite\n");
    }
}