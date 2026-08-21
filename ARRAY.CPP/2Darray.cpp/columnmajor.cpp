#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter the number of Rows  : ";
    cin >> m;
    cout << "Enter the number of Columns : ";
    cin >> n;

    int a[m][n];

    cout << "Enter the Elements  :\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
        cout<< "\n";
    }

    cout << "Column Major Order :\n";
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}