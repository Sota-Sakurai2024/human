#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE  100

//値を入れ替える関数
void AscendingOrder(int array[], int size)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        for (int j = ARRAY_SIZE - 1; j >= i + 1; j--)
        {
            //それぞれに配列の値を格納
            int valueA = array[i];
            int valueB = array[j];
            
            //一つ目の値が二つ目の値より大きければ値を入れ替える
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
        //data配列に乱数を格納
        data[i] = rand();
        printf("%d番目:%d\n", i, data[i]);
    }

    AscendingOrder(data, ARRAY_SIZE);

    //ソートされたdataを出力
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d番目:%d\n", i, data[i]);
    }

    return 0;
}
