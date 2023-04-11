#include <iostream>
#include <string>

using namespace std;

void substring(string s, string ans, int idx)
{

    if (idx >= s.length())
    {
        return;
    }

    for (int i = idx; i < s.length(); i++)
    {

        char chh = s[i];
        ans += chh;
        cout << ans << endl;
    }

    ans.clear();

    substring(s, ans, idx + 1);
}

int main()
{

    string imput = "abcd";
    string ans = "";

    substring(imput, ans,0);

    return 0;
}