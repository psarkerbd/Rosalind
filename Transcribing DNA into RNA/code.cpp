#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("out.txt", "w", stdout);
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'T')
        {
            cout << "U";
        }

        else cout << s[i];
    }

    return 0;
}
