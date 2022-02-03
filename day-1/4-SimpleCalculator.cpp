#include<iostream>
using namespace std;

int main(){
    float num1, num2;
    char oper;
    cout<<"Enter the operator(+, -, *, /) for your operation:";
    cin>>oper;
    cout<<"Enter the numbers with space:";
    cin>>num1>>num2;
    switch(oper){
        case '+':
        cout<<num1<<oper<<num2<<  '='  <<num1+num2<<endl;
        break;
        case '-':
        cout<<num1<<oper<<num2<<  '='  <<num1-num2<<endl;
        break;
        case '*':
        cout<<num1<<oper<<num2<<  '='  <<num1*num2<<endl;
        break;
        case '/':
        cout<<num1<<oper<<num2<<  '='  <<num1/num2<<endl;
        break;

    }
    return 0;


}