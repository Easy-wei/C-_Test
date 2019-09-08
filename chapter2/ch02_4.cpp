# include<iostream>
#include<cstdlib>

using namespace std ;

int main(){
    float num1 = 1;
    double num2 =2.462398 ;
    long double num3 = 4.98873;


    cout<<"3.576占据字节长度"<<sizeof(3.576)<<endl;
    cout<<num1<<endl;
    cout<<num2<<"占据字节长度"<<sizeof(num2)<<endl;
    cout<<num3<<"所占据内存大小\b"<<sizeof(num3)<<endl;
    cout<<num3<<"所占据内存大小\n"<<sizeof(num3)<<endl;
    cout<<num3<<"所占据内存大小\r"<<sizeof(num3)<<endl;
}