#include <stdio.h>
#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mii map<int, int>
#define pqi priority_queue<int, vector<int>>
#define pqig priority_queue<int, vector<int>, greater<int>>
#define pb push_back
#define vpii vector<pii>

using namespace std;


void solve()
{
    int n; cin>>n;
    vi a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());

    vpii ans;
    int count=0;
    for (int j = n-1; ; j--){
        for (int i = j-1; i >=0 ; i--)
        {
            int temp=a[j]%a[i];
            auto it =find(a.begin(),a.end(),temp);
            if(it==a.end()){
                ans.push_back({a[j],a[i]});
                count++;
            }
            if(count==n/2) break;
        }
        if(count==n/2) break;
    }

    for(auto it : ans )
        cout<<it.first<<" "<<it.second<<endl;
}

int main()
{
    int t = 1;
    cin>>t;
    while (t--)
        solve();

        // choose y the lowest element in the array

    return 0;
}