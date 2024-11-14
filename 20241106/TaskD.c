#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%d", i);

        //3かつ5で割り切れるならfizzbuzz
        if (i % 3 == 0 &&
        i % 5 == 0)
        {
            printf("fizzbuzz");
        }
        //3で割り切れるならfizz
        else if (i % 3 == 0)
        {
            printf("fizz");
        }
        //5で割り切れるならbuzz
        else if (i % 5 == 0)
        {
            printf("buzz");
        }

        printf("\n");
    }

    return 0;
}