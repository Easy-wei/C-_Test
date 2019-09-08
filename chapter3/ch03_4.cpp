#include<iostream>
#include<cstdlib>
#include<math.h>


using namespace std ;

int main()
{
    float a =4.3;
    float b = 4.6;
    a = (int) a;
    b = (int) round(b);
    cout <<a<<"\n"<<b<<endl;
    return 0; 
}