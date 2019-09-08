#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int score;
    cout << "请输入成绩:";
    cin >> score;

    if (score > 60)
        goto pass;
        
    else
    {
        goto unpass;
    }

    pass:
    cout << "及格了" << endl;
    goto TheEnd;

    unpass:
    cout << "不及格" << endl;

TheEnd:
    cout << "-------------------" << endl;
    cout << "统计结束" << endl;
    return 0;
}