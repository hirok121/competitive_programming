#include<bits/stdc++.h>

using namespace std;



void solve(){

    int n,x;
    cin>>n;

    priority_queue< pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>  curr;
    priority_queue< pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>  desire;
    vector<int> visited (n,0);

    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        curr.push(make_pair(t,i));
    }

    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        desire.push(make_pair(t,i));
    }

    cin>>x;
    priority_queue<int,vector<int>,greater<int>> razors;

    for (int i = 0; i < x; i++)
    {
        int t;
        cin>>t;
        razors.push(t);
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<"indx "<<curr.top().second <<"value "<<curr.top().first<<endl;
        curr.pop();
    }
    

}

int main (){
int t=1;
 //cin>>t;
    while (t--)
    {
        solve();
    }

    
}