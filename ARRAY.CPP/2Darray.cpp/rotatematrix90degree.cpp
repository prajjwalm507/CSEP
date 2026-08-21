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
    cout << "The Matrix is :\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The new Matrix after rotating 90 degree clockwise is :\n";
    for(int i=0; i<n; i++){
        for(int j=m-1; j>=0; j--){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}