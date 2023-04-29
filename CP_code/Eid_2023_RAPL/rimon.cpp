#include <stdio.h>
#include <bits/stdc++.h>


using namespace std;

void solve()
{
    unsigned long long int n,s,i;
    cin>>s>>n;
    vector<pair<int,int>> a(n);

    for( i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }

    sort(a.begin(),a.end());

    for( i=0;i<n;i++)
    {
        if(s > a[i].first){
            s+=a[i].second;
        }else
            break;
    }
    if (i==n)
    printf("YES\n");
    else
    printf("NO\n");

}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}