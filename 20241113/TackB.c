#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE  100

void AscendingOrder(int array[], int size)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        for (int j = ARRAY_SIZE - 1; j >= i + 1; j--)
        {
            int valueA = array[i];
            int valueB = array[j];
            
            if (valueA > valueB)
            {
                int max = valueA;
                int min = valueB;

                array[i] = min;
                array[j] = max;
            }
        }
    }
}

int main()
{
    int data[ARRAY_SIZE];

    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        data[i] = rand();
        printf("%d番目:%d\n", i, data[i]);
    }
    return 0;
}
