#include <stdio.h>
#include <bits/stdc++.h>


using namespace std;

bool isSpecial(char ch){
    string special_characters = "!@#$%^&*()-+";
    int i=0;

    while (special_characters[i])
    {
       if(ch==special_characters[i])
            return true;
        i++;
    }
    
    return false;
}

void solve()
{
    int l;cin>>l;
    string s; cin>>s;
    bool alpha=true,digit=true,special=true,low=true;
    int i=0;
    while (s[i])
    {
        if (alpha && isupper(s[i]))
            alpha=false;
        
        else if (low && islower(s[i]))
            low=false;
        
        else if (digit && isdigit(s[i]))
            digit=false;
        
        else if (special && isSpecial(s[i]))
            special=false;
        
        i++;
    }

    int lack=alpha+low+digit+special;

    if(l+lack >= 6)
        cout<<lack<<endl;
    else
        cout<<6-l<<endl;
    
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}