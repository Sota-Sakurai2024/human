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
int main()
{
    char human[] = {'H', 'U', 'M', 'A', 'N', 'A', 'C', 'A', 'D', 'M', 'Y'};

    for (int i = 0; i < sizeof(human); i++)
    {
        cout << human[i] << endl;
    }

    return 0;
}