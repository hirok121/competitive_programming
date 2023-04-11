#include <iostream>

using namespace std;

void solve()
{
    int a, b;

    cin >> a >> b;

    if (a < b)
    {
        if ((b - a) % 2 == 1)
        {
            cout << 1<<endl;
        }
        else
            cout << 2<<endl;
    }
    else if (a > b)
    {
        if ((a - b) % 2 == 0)
        {
            cout << 1<<endl;
        }
        else
            cout << 2<<endl;
    }
    else
        cout << 0<<endl;
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}