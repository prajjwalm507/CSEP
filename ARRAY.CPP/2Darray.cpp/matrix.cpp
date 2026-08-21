#include<iostream>
using namespace std;
int main()
{
    int m, n, i, j;
    cout << "Enter the number of Rows o :";
    cin >> m;
    cout << "Enter the number of Columns :";
    cin >> n;
    int a[m][n];
    cout << "Enter the Elements  :";
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cin >> a[i][j];
        }
        cout <<" "<< endl;
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout<< a[i][j] << " ";
        }
        cout << " "<< endl;

    }
  return 0;
}