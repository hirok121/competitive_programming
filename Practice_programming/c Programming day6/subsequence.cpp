#include<iostream>
#include<string>

using namespace std;

    void substring(string s,string ans ){

        if (s.length()==0)
        {
            cout << ans<< endl;
            return;
        }
        
        char ch=s[0];

        substring(s.substr(1),ans);
        substring(s.substr(1),ans+ch);
        
        

    }

int main(){

    string imput="abcd";
    string ans="";

    substring(imput,ans);

    return 0;
}