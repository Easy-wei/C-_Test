#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j, num;
    cout << "输入截止的99乘法表的数字:";
    cin >> num;

    for (i = 1; i < 10; i++)
    {
        if (i < num)
            for (j = 1; j < 10; j++)
            {
                if (j <= i)
                    cout << i << "*" << j << '=' << i * j << ' ';
            }
        else
        {
            break;
        }
        cout << endl;
    }
}