#include<iostream>
using namespace std;
int sumofdigits(int n, int sum=0){
    if(n==0)
    return sum;
    int d= n%10;
    sum = sum + d;
    return sumofdigits(n/10, sum);
}
int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << sumofdigits(n);
    return 0; 
}