#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
            if (j <= i)
                cout << i << '*' << j << '=' << i * j << " ";
        cout << endl;
        continue;
    }
    return 0;
}