#include <iostream>
using namespace std;

void oneTo100(int a) {
    if (a<=100){
        cout << a <<endl;
        oneTo100(a+1);
    }
}

int main() {
    
    int n = 1;
    oneTo100(n);
    
    return 0;
}
