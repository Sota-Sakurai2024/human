#include <iostream>

using namespace std;

struct Define
{
    static const int ARRAY_SIZE = 20;
};

class Stack
{
    int nextIndex;
    char alphabet[Define::ARRAY_SIZE];
public:
    void push(char name){
        alphabet[nextIndex] = name;
        nextIndex++;
    }

    char pop(){
        nextIndex--;
        char character = alphabet[nextIndex];
        alphabet[nextIndex] = 0;

        return character;
    }

    void alphabetLog(){
        cout << "Result: ";
        for (int i = 0; i < nextIndex; i++){
            cout << alphabet[i];
        }
        cout << endl;
    }
};

int main(){
    Stack stack;

    char current = 'A';
    while (current <= 'Z') 
    {
        cout << "push " << current << endl;
        stack.push(current);
        stack.alphabetLog();

        // Pop判定
        if (current %2 == 0) 
        {
            char popChar = stack.pop();
            cout << "pop " << popChar << endl;
            stack.alphabetLog();
        }
        ++current;
    }
    return 0;
}