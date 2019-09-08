#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 1, j, sum = 1;
    cout << "输入N,求得1!到N!" << endl;
    cin >> j;
    while (i <= j)
    {
        sum = i * sum;
        cout << i << "!=" << sum << endl;
        i++;
    }
    return 0;
}