#include <iostream>
#include<cstdlib>
#include<math.h>

using namespace std;

int main()
{
    int r = 3;
    const float PI = 3.14;
    double s ;
    s = pow(r,2)*(PI) ;

    cout <<"r = "<<r<<endl;
    cout <<"PI = "<< PI<<endl;
    cout <<"面积="<< s <<endl;

    int a = 100 ;
    int b = 100 ;
    int c = 100;
    a = a+5;
    b = a+b+c;
    a += 5;
    b *= 2;
    a += a+=b +=b%=4;
    cout << "a = "<<a<<" b = "<<b<<endl;


    char  ch = 127;
    char  dh = 2;
    char  eh =  dh+ch;

    cout <<ch <<"\n"<<dh<<"\n"<<eh<<endl;


}