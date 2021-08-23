#include "two_fer.h"

#include <stddef.h>
#include <stdio.h>

void two_fer(char *buffer, const char *name)
{
    const char *nameOrYou = name == NULL ? "you" : name;
    sprintf(buffer, "One for %s, one for me.", nameOrYou);
}
