#include <stdio.h>
#define ARRAY_SIZE  11
int main()
{
    int data[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        data[i] = i;
        printf("%d", data[i]);
    }
    return 0;
}