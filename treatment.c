#include <stdlib.h>
#include <stdio.h>
#include "treatment.h"

char **splitWordsFromReferenceText(FILE *file)
{
    char **splits;
    splits = malloc(200 * sizeof(char*));

    char word[50];

    char c;
    c = fgetc(file);
    
    while(c != EOF) {

    }

    return splits;
}
