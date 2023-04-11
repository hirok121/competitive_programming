#include <bits/stdc++.h>

using namespace std;


int solve()
{
    int cnt=0 ,i=0;
    string s,a="31415926535897932384626433832";
    cin>>s;

    while (i<s.size())
    {
        if(a[i]!=s[i]) {
            break; 
            }
            i++;
            cnt++;
    }

    cout<<cnt<<endl;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
        solve();
}
