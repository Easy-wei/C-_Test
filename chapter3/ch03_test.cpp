#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int a =765, cost = 210;
    int num ;
    num = a/17;
    
    cout <<"all_cost = "<<num*cost<<endl;

    int d,f1,f2,f3;
    d = 129;
    f1 = d/100;
    f2 = (d%100)/50;
    f3 = (d%100%50)/10;
    cout << "随机金额 = "<<d<<endl;
    cout <<"零钱分别为"<<f1<<"\n"<<f2<<"\n"<<f3;




    return 0; 
}