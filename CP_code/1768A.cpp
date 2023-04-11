#include<bits/stdc++.h>

using namespace std;

vector<unsigned long long int > v ;

    unsigned long long int prevv ,curr,i ,sum;

 void solve(){

    int k;
    cin>>k;


    for ( i =v.size() ; i < k; i++)
    {
        curr*=i;
        v.push_back(curr);
    }
    
    curr=v[k-1];

 for (  i = k-1; i >0; i++)
{
    prevv = curr/i;

    sum= prevv +curr;
     if(sum%k==0)
     {
       // cout<<prev<<"  "<<curr<< "  "<<sum<<endl;
       cout<<i<<endl;
        return;
    }
    curr=prevv;
}

    cout<<-1<<endl;

 }

int main(){

    v.push_back(1);
    v.push_back(1);
    curr=1;

    int t; cin>>t;

    for (int i = 0; i < t; i++)
    {
         solve();
    }
    
    
   
    return 0;

}