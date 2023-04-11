#include <bits/stdc++.h>

using namespace std;


int solve()
{
    int n; cin>>n;
    map<int,int> mp;
    
    for (int i = 0; i < n; i++)
    {
        int t; cin>>t;
        mp[t]++;
    }

    for(auto x : mp) cout<<x.first<<"---->"<<x.second<<endl;
    
    int ans=0;

    while (!mp.empty())
    {
        int last=-1;
        for(auto i : mp){
            if (i.first!=(last+1))
            {
                ans++;
                cout <<"ans++"<<i.first<<endl;;
            }
            mp[i.first]--;
            if((mp[i.first])==0){
             mp.erase(i.first);
             cout <<"mp erase "<<i.first<<endl;
            }
            last=i.first;
        }
    }

    for(auto x : mp) cout<<x.first<<"---->"<<x.second<<endl;
    

    cout<<ans<<endl;
}

int main()
{

    int t=1;
   // cin >> t;

    while (t--)
       solve();


}
