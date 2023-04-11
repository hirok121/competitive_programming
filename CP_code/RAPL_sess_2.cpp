#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int a, b;
    unsigned long long int x, y, cont, temp, ra, aa, bb, rb, i, j;
    cin >> x >> y >> a >> b;

    aa = (x - 1) / a;
    ra = y / a;
    aa = ra - aa;

    bb = (x - 1) / b;
    rb = y / b;
    bb = rb - bb;

    j = a * b / __gcd(a, b);

    temp = (x - 1) / j;
    i = y / j;
    temp = i - temp;

    cont = y - x + 1 - (aa + bb - temp);

    cout << cont << endl;

    return 0;
}