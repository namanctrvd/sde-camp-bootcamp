//          * 
//        * * * 
//      * * * * * 
//    * * * * * * * 
//  * * * * * * * * * 


#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++){
            cout << "  ";
        }
        for(j=1;j<=(i*2-1);j++){
            cout << "* ";
        }
        cout <<endl;
    }
}