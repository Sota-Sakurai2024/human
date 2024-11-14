#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE  11

void shuffle(int array[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        int j = rand() % size;
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
}

int main()
{
    int data[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        data[i] = i;
        printf("%d", data[i]);
    }

    shuffle(data, ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d回目:%d\n", i,data[i]);
    }

    return 0;
}