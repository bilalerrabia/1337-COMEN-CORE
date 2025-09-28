#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#define MAX_SIZE 100

typedef struct{
    int items[MAX_SIZE];
    int top;
}stack;

#endif