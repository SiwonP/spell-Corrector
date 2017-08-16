#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "correct.h"

char *alphabet = "abcdefghijklmnopqrstuvwxyz";
char *delimiters = "()[]{}<>,?;.:/=+-_$*\"'";

char *toLowerCase(char *word) {
    char *c;

    for (c = word; *c; c++) {
        *c = tolower(*c);
    }

    return word;
}
