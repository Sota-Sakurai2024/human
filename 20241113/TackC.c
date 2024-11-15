#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE  100

int target = 20;
int result = -1;


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

void BinarySearch(int array[])
{
    int left = 0;
    int rigth = ARRAY_SIZE - 1;

    while (left < rigth)
    {
        int mid = (left + rigth) / 2;
        printf("真ん中%d\n", mid);
        if (array[mid] == target)
        {
            result = mid;
            break;
        }
        else if (array[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            rigth = mid;
        }
    }
}

int main()
{
    int data[ARRAY_SIZE];
    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        data[i] = rand() % 100 + 1;
        printf("%d番目:%d\n", i, data[i]);
    }

    AscendingOrder(data, ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d番目;%d\n", i, data[i]);
    }

    BinarySearch(data);

    //リザルトが0以上なのかの確認
    if (result >= 0)
    {
        //0以上なら発見した
        printf("targetのインデックスは%dです", result);
    }
    else
    {
        //0未満の場合は発見できなかった
        printf("targetは見つかりませんでした\n");
    }

    return 0;
}