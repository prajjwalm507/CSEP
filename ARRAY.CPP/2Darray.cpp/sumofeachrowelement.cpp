#include<iostream>
using namespace std;
int main(){
     int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
    }
    cout << endl;
    }
    for(int i=0; i<m; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum = sum + arr[i][j];
    }
    cout<< "Sum of Elements in Row " <<i<< " is : " << sum << endl;
}
    return 0;
}