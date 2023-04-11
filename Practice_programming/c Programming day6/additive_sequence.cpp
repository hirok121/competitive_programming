#include <iostream>

using namespace std;

bool isadditive(string s){

    if (s.length()<3)
    {
        return true;
    }
    
    return ((s[0]-'0')+(s[1]-'0'))==(s[2]-'0') && isadditive(s.substr(1));

}

int main(){

   string a="12358";

   if (isadditive(a))
   {
    cout<<"yes";
   }else{
    cout<<"no";
   }
   

    return 0;
}