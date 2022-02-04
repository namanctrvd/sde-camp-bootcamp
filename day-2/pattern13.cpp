//      1 
//     1 1 
//    1 2 1 
//   1 3 3 1 
//  1 4 6 4 1


#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        int coef = 1;
        for(k=1;k<=5-i;k++){
            cout << " ";
        }
        for(j=1;j<=i;j++){
            cout << coef <<" ";
            coef = coef*(i-j)/j;
        }
        cout <<endl;
    }
}