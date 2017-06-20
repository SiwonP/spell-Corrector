#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *alphabet = "abcdefghijklmnopqrstuvwxyz";
char *delimiters = "()[]{}<>,?;.:/=+-_$*\"'";

char *toLowerCase(char *word) {
    char *c;

    for (c = word; *c; c++) {
        *c = tolower(*c);
    }

    return word;
}



int main (int argc, char **argv) {
    return 0;
}
