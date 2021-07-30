#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
//#define DEBUG
using namespace std;

namespace solve
{
    void getB(int* bp)
    {
        while (true)
        {
            int b;
            scanf("%d", &b);
            getchar();
            if (b > 100 || b < 1)
            {
                cout << "Invalid Input!Type again!" << endl << "(Range: 1 - 100)" << endl;
            }
            else
            {
                *bp = b;
                return;
            }
        }
    }
}

int main(void)
{
    srand(time(NULL));
    int answer = (int)(rand()) % 100 + 1;
#ifdef DEBUG
    cout << "answer: " << answer << endl;
#endif
    int b;
    while (true)
    {
        solve::getB(&b);
#ifdef DEBUG
        cout << "b: " << b << endl;
#endif 
        if (b == answer)
        {
            cout << "Right!" << endl;
            return 0;
        }
        else
        {
            cout << (b < answer ? "You answer is smaller than answer.But don't worry, try again!" : "You answer is biger than answer.But don't worry, try again!") << endl;
        }
    }
}
