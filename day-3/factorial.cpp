#include <iostream>
using namespace std;

int factorial(int a) {
    if(a>=1){
        return a * factorial(a-1);
    }
    else {
        return 1;
    }
}

int main() {
    int n, result;

    cout <<"Enter a positive number: ";
    cin >> n;
    result = factorial(n);
    cout << "The factorial of " << n <<" is: " << result <<endl;
    return 0;
}