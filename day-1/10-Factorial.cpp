#include<iostream>
using namespace std;

int main(){
    int num;
    long double factorial = 1.0;

    cout<<"Enter a positive integer: ";
    cin>>num;

    for(int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << num << " = " << factorial<<endl;    


    return 0;
}