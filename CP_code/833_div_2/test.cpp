#include <bits/stdc++.h>

using namespace std;

bool rec(vector<int> &ans, int indx, int n, int s, int sum)
{

    if (n = indx && sum == s){
         return true;
    }
        

    if (n >= indx || sum > s)
    {
        return false;
    }


    for (int i = 1; i <= 6; i++)
    {
        ans[indx] = i;
        if (rec(ans, indx + 1, n, s, sum + i))
            return true;
    }

    return false;
}

int solve()
{
    int n, s, r;
    cin >> n >> s >> r;
    vector<int> ans(n, -1);
    ans[0] = s - r;
    s -= r;

    rec(ans, 1, n, s, 0);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
        solve();
}
