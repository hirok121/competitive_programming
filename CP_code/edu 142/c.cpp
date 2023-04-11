#include <bits/stdc++.h>

#define pii pair<int, int>

using namespace std;

void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> vec(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        vec[i] = t;
    }
    ans = n / 2;
    int s = 1, e = n,prev=1,temp=0;

         if ((vec[s++] + vec[e--]) == (n + 1))
        temp++;
    while (s < e)
    {
       //  cout<<"ANs --\n";

        if ((vec[s] + vec[e--]) == (n + 1) && vec[s++]>vec[prev++]){  
        temp++;
        }
        else
            break;
    }

    int flag=n/2-temp+1;

    if(vec[1]==flag) ans-=temp;

    cout << ans << endl;
}

int main()
{
    int t=1;
    // cin >> t;
    while (t--)
        solve();

        return 0;
}