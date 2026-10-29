#include <iostream>
#include <vector>
using namespace std;

int countSubsets(const vector<int>& a, int index, int remaining) {
    if (index == a.size())
        return remaining == 0 ? 1 : 0;

    return countSubsets(a, index + 1, remaining)
         + countSubsets(a, index + 1, remaining - a[index]);
}

int main() {
    int n, k;
    cout << "Enter array size and target sum: ";
    cin >> n >> k;

    vector<int> a(n);
    cout << "Enter the array elements: ";
    for (int& x : a)
        cin >> x;

    cout << "Number of subsets: " << countSubsets(a, 0, k) << '\n';
    return 0;
}