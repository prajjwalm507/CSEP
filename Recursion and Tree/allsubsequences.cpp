#include <iostream>
using namespace std;

void subsequences(const string& s, int& count, string ans, int i)
{
    if (i == s.length())
    {
        cout << ans << endl;
        count++;
        return;
    }

    subsequences(s, count, ans, i + 1);
    subsequences(s, count, ans + s[i], i + 1);
}

int main()
{
    string s;
    int count=0;
    cout << "Enter a string: ";
    cin >> s;

    subsequences(s,count, "", 0);
    cout << "No. of Subsequences :" << count;
    return 0;
}