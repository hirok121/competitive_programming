#include<bits/stdc++.h>

using namespace std;

vector<int> ans(26,0);

 void solve(){

    string s;

    while ( 1 )
    { 
        string t;
       getline(cin,t);
       s+=t;

       if(s[s.size()-1]=='.'){
        s.erase(s.size()-1);
        break;
       }
        
    }
   // cout<<"break\n";

    for (int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i])){
        s[i]=tolower(s[i]);
          ans[s[i]-'a']++;
        }
    }
    
 }

 void fff(){

    // char *s=new char[100];
    // char *n=new char[200];
    int i;

    string s;

    cin>>s;

    i=s.size()-1;

    while (i>=0)
    {
        s+=s[i--];
    }
    
  
    cout<<s<<endl;

   // delete(s);
 }


int main(){


    solve();

    for (int i = 0; i < 26; i++)
    {
        char ch=i+'a';
        cout<<ch <<" : "<<ans[i]<<endl;
    }
    
   // fff();
   
    return 0;

}