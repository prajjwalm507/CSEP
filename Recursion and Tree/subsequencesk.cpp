#include <iostream>
#include <string>
using namespace std;

void printSubsequences(const string& s, int k, int index, string& current) {
    if (current.length() == k) {
        cout << current << '\n';
        return;
    }

    if (index == s.length() || current.length() + (s.length() - index) < k)
        return;

    current.push_back(s[index]);
    printSubsequences(s, k, index + 1, current);
    current.pop_back();

    printSubsequences(s, k, index + 1, current);
}

int main() {
    string s;
    int k;
    int count = 0;
    cout << "Enter a string and k: ";
    cin >> s >> k;

    string current;
    printSubsequences(s, k, 0, current);

    return 0;
}