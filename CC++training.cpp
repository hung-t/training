#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.size() - 7; i++)
        if (str.substr(i, 5) == "virus")
            count++;
    cout << count;
}