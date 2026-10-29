#include<iostream>
using namespace std;
int reverseNum(int N, int d){
        if(N==0){
        return 0;
    }
    d=N%10;
    cout << d;

    return reverseNum(N/10, N%10);
}

int main(){
    int N, d;
    cout<<"Enter the number: ";
    cin>> N;
    reverseNum(N,d);
}