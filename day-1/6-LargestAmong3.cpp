#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout<<"Enter the numbers with spaces : ";
    cin>>num1>>num2>>num3;
    if ((num1>num2)&&(num1>num3)){
        cout<<num1<<" is largest among "<<num1<<" " <<num2 <<" " <<num3<<endl;
    }
    else if((num2>num1)&&(num2>num3)){
        cout<<num2<<" is largest among "<<num1<<" " <<num2<<" " <<num3<<endl;
    }
    else{
        cout<<num3<<" is largest among "<<num1<<" " <<num2<<" " <<num3<<endl;
    }
    return 0;
}