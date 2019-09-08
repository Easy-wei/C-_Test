#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int sum = 0, i = 0, j;
    cout << "请输入n值:";
    cin >> j;

    do
    {
        sum += i;
        cout << "i=" << i << " sum = " << sum << endl;
        i++;
    } while (i<=j && j<=10);
}