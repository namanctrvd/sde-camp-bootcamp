#include <iostream>
using namespace std;

int fib(int a) {
    if((a==1)||(a==0)){
        return a;
    }
    else {
        return (fib(a-1) + fib(a-2));
    }
}

int main() {
    int n, result;
    cout << "which fibonacci number you want?" <<endl;
    cin >> n;
    result = fib(n);
    cout << n << "th fibonacci number is: " << result << endl;

}
