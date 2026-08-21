#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<" Enter the number of rows and columns of the square matrix : ";
    cin>> m >> n;
    int a[m][n];
        if(m!=n){
        cout<< "The array is not a square matrix.";
        return 0;
        }
    cout<< "Enter the elements of the array :";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>> a[i][j];
        }
        cout<< endl;
    }

    
    int sum1=0, sum2=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum1 = sum1 + a[i][j];
            }
            if(i+j==n-1){
                sum2=sum2+a[i][j];
            }
        }
    }
    cout << "The maximum sum of the diagonal elements is : ";
    if(sum1>sum2)
         cout<< sum1;
    else
            cout<< sum2;
       
            return 0;
}