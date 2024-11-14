#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  ARRAY_SIZE  10

int main()
{
    int data[ARRAY_SIZE];

    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        int value = rand();
        data[i] = value;
        printf("%d\n", data[i]);
    }

    return 0;
}