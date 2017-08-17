#include <stdlib.h>
#include <stdio.h>
#include "count.h"

char **splitWordsFromReferenceText(FILE *file)
{
    char **splits;
    splits = malloc(200 * sizeof(char*));

    char word[50];

    char c;
    c = fgetc(file);
    
    while (c != EOF) {

    }

    return splits;
}

Counter *countSplits(char **splits)
{
    Counter *res = malloc(300 * sizeof(Counter));

    while (splits) {
    }

    return res;
}
