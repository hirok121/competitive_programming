#include<bits/stdc++.h>
#include<windows.h>

using namespace std;

void GotoXYy(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a,b);

 }

int main(){

    cout<<"hirok "<<endl;

    GotoXYy(550,450);

    cout<<"gfgfgfjgfgfg\n";


 return 0;
}
