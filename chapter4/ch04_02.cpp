#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int num;
    cout<<"请输入某个整数:";
    cin>>num;
    (num%2==0)?cout<<"输入的数字为偶数":cout <<"输入的数字为奇数";
    return 0;
}