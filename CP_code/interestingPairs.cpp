#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n; cin>>n;

    vector<int> store(n,-1);

    for (int i = 0; i < n; i++)
    {
        cin>>store[i];
    }
    
    sort(store.begin(),store.end());

    // for(auto i : store) cout<<i<<"   " ;

    // return;

    int maxdiff=store[n-1]-store[0];

    int s=0,e=n-1;

    int count=0;

   
    while (1)
    {
        if (maxdiff==(store[e]-store[s]))
        {
            count++;
        }else
           break;
        s++;
    }
 s=0;e--;
     while (1)
    {
        if (maxdiff==(store[e]-store[s]))
        {
            count++;
        }else
           break;
        e--;
    }
    
    cout<<count*2<<endl;

}


void solven2(){

    int n; cin>>n;

    vector<int> store(n,-1);

    for (int i = 0; i < n; i++)
    {
        cin>>store[i];
    }
    
    sort(store.begin(),store.end());
int count=0;


    int maxdiff=store[n-1]-store[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j) continue;

        int temp=abs(store[i]-store[j]);

        if (temp==maxdiff)
        {
            count++;
        }
        

        }
        
    }
    
    
    cout<<count<<endl;

}

int main(){

    int t; cin>>t;
   for (int  i = 0; i < t; i++)
   {
    solve();
   }
   
    // solve();
    return 0;

}