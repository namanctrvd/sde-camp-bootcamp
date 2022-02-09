#include <iostream>
using namespace std;

int RecAtoi(char *str, int n){
    if(n==1){
        return (*str-'0');
    }
    return (10 * RecAtoi(str, n-1) + str[n-1] - '0');
}

int main() {
    char str[] = "23428764" ;
    int n;
    n = RecAtoi(str, 8);
    cout << n <<endl;
    return 0;

}