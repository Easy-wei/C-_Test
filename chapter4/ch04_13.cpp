#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 70; i++)
    {
        if (i % 5 == 0 || i % 7 == 0)
        {
            if (i % 35 == 0)
            {
                continue;
            }
            else
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}