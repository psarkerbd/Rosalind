#include<iostream>
#include<map>
#include<fstream>
using namespace std;

typedef map<char, int>mpci;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    mpci mp;

    cin >> s;

    int len = s.length();

    for(int i=0; i<len; i++)
    {
        mp[s[i]]++;
    }

    int fl = 1;

    cout << mp['A'] << " " << mp['C'] << " " << mp['G'] << " " << mp['T'];

    return 0;
}
