#include <iostream>

using namespace std;

int main()
{
    char human[] = {'H', 'U', 'M', 'A', 'N', 'A', 'C', 'A', 'D', 'M', 'Y'};

    for (int i = 0; i < sizeof(human); i++)
    {
        cout << human[i] << endl;
    }

    return 0;
}