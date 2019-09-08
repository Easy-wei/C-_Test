#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, num = 0;
    /*
    for (i = 1; i < 10; i++)
        num += i;
    */

    for (i = 1; i < 10; num += i++)
    cout << num << endl;
    return 0;
}