#include <iostream>

using namespace std;

struct Define
{
    static const int ARRAY_SIZE = 20;
};

class Queue
{
    int nextIndex;
    int dequeueIndex;
    char alphabet[Define::ARRAY_SIZE];
public:
    void enqueue(char name){
        alphabet[nextIndex % Define::ARRAY_SIZE] = name;
        nextIndex++;
    }

    char dequeue(){
        char character = alphabet[dequeueIndex % Define::ARRAY_SIZE];
        alphabet[dequeueIndex % Define::ARRAY_SIZE] = 0;
        dequeueIndex++;

        return character;
    }

    void alphabetLog(){
        cout << "Result: ";
        for (int i = 0; i < Define::ARRAY_SIZE; i++){
            //次に消す要素の中身が先頭なのでdepueueIndexの始まりから出力している
            cout << alphabet[(dequeueIndex + i) % Define::ARRAY_SIZE];
        }
        cout << endl;
    }
};

int main(){
    Queue queue;

    char current = 'A';
    while (current <= 'Z') 
    {
        cout << "enqueue " << current << endl;
        queue.enqueue(current);
        queue.alphabetLog();

        // Dequeue判定
        if (current % 2 == 0) 
        {
            char dequeueChar = queue.dequeue();
            cout << "dequeue " << dequeueChar << endl;
            queue.alphabetLog();
        }
        ++current;
    }
    return 0;
}