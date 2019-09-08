#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int score;
    cout << "输入学生成绩:" ;
    cin >> score;
    if (score > 100)
    {
        cout << "输入成绩大于100,有误,请重新输入" << endl;
    }
    else
    {
        if (score < 0)
            cout << "不允许存在负的成绩" << endl;
        else
        {
            if (score < 60)
                cout << "不及格" << endl;
            else
            {
                if (score > 80)
                    cout << "Excellent" << endl;
                else
                {
                    cout << "还行,及格了"<<endl;
                }
            }
        }
    }
}