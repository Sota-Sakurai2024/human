#include <iostream>

using namespace std;

//値を入れ替える関数
void swapChar(char *lhs, char *rhs)
{
    //値を一時保存する変数
    char temp;
    
    temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;
}
//挿入ソートの関数
void InsertSort(char character[], int size)
{
    int index;
    
    //一つ目は整列済みなので配列の次の値からループさせる
    for (int i = 1; i < size; i++)
    {
        index = i;
        //整列されていたらここは実行されない
        while ((index > 0) && (character[index - 1] > character[index]))
        {
            //値を入れ替える
            swapChar(&character[index - 1], &character[index]);
            index--;
        }
    }
}
int main()
{
    char human[] = {'H', 'U', 'M', 'A', 'N', 'A', 'C', 'A', 'D', 'M', 'Y'};

    for (int i = 0; i < sizeof(human); i++)
    {
        cout << human[i] << endl;
    }

    //挿入ソートの関数を実行する
    InsertSort(human, sizeof(human));
    return 0;
}