#ifndef TREATMENT_H
#define TREATMENT_H

#include <stdio.h>

typedef struct Counter Counter;

struct Counter {
    int count;
    char *word;
};

char **splitWordsFromReferenceText(FILE*);

Counter *countSplits(char**);

#endif
