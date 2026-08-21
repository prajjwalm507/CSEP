#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter the number of rows and columns : ";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter the elements of the array : ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
    }
    cout << endl;
}
    int sum=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum = sum + arr[i][j];
        }
    }
    cout << "The sum of all elements in the array is : " << sum << endl;
    return 0;
}