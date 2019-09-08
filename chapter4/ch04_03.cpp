#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char select;
    cout << "请选择你想去的城市\n A 东京\n B 巴黎\n C 伦敦" << endl;
    cout << "(输入字母即可,大小均可)" << endl;
    cin >>select;

    switch (select)
    {
    case 'a':
    case 'A': //利用case没有break的顺延特性,实现大小写同结果
        cout << "东晋五日游xx万元" << endl;
        break;
    case 'b':
    case 'B':
        cout << "bali xxx ri xxfasdf " << endl;
        break;
    case 'c':
    case 'C':
        cout << " 伦敦 几日游xx违法第三方as" << endl;

    default:
        break;
    }
}