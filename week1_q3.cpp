#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string reverseString = "";
    for (int i = s.length() - 1; i >= 0; i--)
        reverseString += s[i];
    cout << reverseString << endl;
    return 0;
}
