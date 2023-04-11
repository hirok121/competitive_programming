// C++ program to print all
// possible strings of length k
#include <bits/stdc++.h>
using namespace std;
	

// The main recursive method
// to print all possible
// strings of length k
void permutation(string s,string ans)
{
	if (s.length()==0)
	{
		cout << ans << endl;
		return;
	}

	for (int i = 0; i <s.length(); i++)
	{
		
        char ch=s[i];

        string ros=s.substr(0,i)+s.substr(i+1);
		
		permutation(ros,ans+ch);
	}

}



// Driver Code
int main()
{
	string s="abcd";
	
	permutation(s,"");

   // cout<<s.substr(3)<<" end";
}

// This code is contributed
// by Mohit kumar
