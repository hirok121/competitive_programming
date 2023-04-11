#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;

    cin>>s;

    int ans=0;

    int i=0;

    char prev='a',curr;

    while (s[i])
    {
        curr=s[i++];
        int temp=abs(curr-prev);
        ans+= temp<=13 ? temp:26-temp;
        prev=curr;

    }
    
    cout<<ans<<endl;

    return 0;

}