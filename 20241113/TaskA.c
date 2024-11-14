#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE  11

    int result = -1;
    int target = 5;

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

void LinearSearch(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (target == array[i])
        {
            result = i;
        }
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

    LinearSearch(data, ARRAY_SIZE);

    printf("targetのインデックスは%dです", result);

    return 0;
}