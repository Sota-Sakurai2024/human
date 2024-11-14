#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE  100

int main()
{
    int data[ARRAY_SIZE];
    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        data[i] = rand() % 100 + 1;
        printf("%d番目:%d\n", i, data[i]);
    }
    return 0;
}