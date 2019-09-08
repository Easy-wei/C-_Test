#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j, num;
    typein :
    cout << "输入水仙花最大数量:";
    cin >> num;

    if (num % 2 != 0)
    {
        cout << "水仙花的数量必须为偶数朵,请重新输入\n";
        goto typein ;
    }

    for (i = 0; i <= num; i++)
    {
        for (j = 0; j <= num; j++)
        {
            if (i == j || (i + j) == (num))
            { //这个核心就是找到打印*的坐标关系.上句话很好描述了规律
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}