#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j = 1;
    for (i = 1; i <= 3; i++)
    {
        j = i * j;
    }
    cout << "10!=" << j;
    return 0;
}