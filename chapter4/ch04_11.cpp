#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int year;
    cout << "输入年份:";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is run nian " << endl;
            }
            else
                cout << year << " is not 闰年" << endl;
        }
        else
        {
            cout << year << " is 闰年" << endl;
        }
    }
}