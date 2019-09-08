#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    short int a = 2;
    float b = 4.9;
    double c ;
    c =  a + b ;

    cout <<"len(a)="<<sizeof(a)<<endl;
    cout <<"len(b)="<<sizeof(b)<<endl;
    cout <<"len(c)="<<sizeof(c)<<endl;
    return 0;
}