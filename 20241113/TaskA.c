#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE  11

    int result = -1;
    int target = 5;

//データの中身をシャッフルする関数
void shuffle(int array[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        //ランダムな値を出しそれをsizeで割った余りを格納
        int j = rand() % size;
        //シャッフルする
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
}

//バイナリサーチ関数
void LinearSearch(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //targetと一致していればresultに格納する
        if (target == array[i])
        {
            result = i;
        }
    }
}

int main()
{
    int data[ARRAY_SIZE];
    //0から10までをdata配列に格納
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        data[i] = i;
    }

    //data配列をシャッフルする
    shuffle(data, ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d回目:%d\n", i,data[i]);
    }

    //バイナリサーチを実行する
    LinearSearch(data, ARRAY_SIZE);

    //探している値のインデックスを出力
    printf("targetのインデックスは%dです", result);

    return 0;
}