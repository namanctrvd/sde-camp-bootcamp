#include<iostream>
using namespace std;

int main(){
    int i = 7, i2;
    float f = 67.23, f2;
    double d;

    i2 = f;
    f2 = i;
    d = f;
    cout<<"Float to integer : "<<i2<<endl;
    cout<<"Integer to float : "<<f2<<endl;
    cout<<"Float to double : "<<d<<endl;

    return 0;
}