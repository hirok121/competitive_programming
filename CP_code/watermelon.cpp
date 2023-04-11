#include<bits/stdc++.h>


#include <iostream>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <cstdlib>


using namespace std;

void Boarder();
void GotoXY(int x, int y);

void fullscreen()
{
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void load()
{
	//Boarder();

	int timer =5+ rand()%20;
    int row,col,r,c,q;
    GotoXY(65,34);
    cout<<"BOOTING UP...";
    GotoXY(60,36);
    for(r=1;r<=timer;r++)
	{
    for(q=0;q<=100000000;q++);//to display the character slowly
    printf("%c",177);
	}
    Sleep(100);
  //  system("cls");
}

void GotoXY(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a,b);
  //  SetCursorPos(200,200);
 }

void Boarder()
{
int i;
   system("cls");
   for(i=10;i<140;i++)
   {
       GotoXY(i,10);
           cout<<"=";
       GotoXY(i,58);
           cout<<"=";
   }
   for(i=10;i<58;i++)
   {
       GotoXY(10,i);
           cout<<"|";
       GotoXY(140,i);
       		cout<<"|";
   }
   cout<<endl;
}




int main(){

    // fstream datain;
    // datain.open("database.txt", ios_base :: in | ios_base :: out | ios_base :: app );

    //  if(!datain.is_open()) cout<<"Not created\n";

    // while (! datain.eof() )
    // {
    //     item temp;
    //     datain>>temp.item_code;
    //     datain>>temp.item_name;
    //     datain>>temp.item_price;


    //     database[temp.item_code]=temp;
    // }

    // datain.close();

    // itemdetails();


    // time_t     now = time(0);

    // string srtime =ctime(&now);



    //  struct tm  tstruct;
    //  char      buf[80];
    // tstruct = *localtime(&now);
    // strftime(buf, 80, "%d/%m/%Y TIME: %X", &tstruct);
    // time_t Mktime=mktime(&tstruct);
    //  string ast=asctime(&tstruct);

    // cout<< srtime << endl;
    // cout<< now << endl;
    // cout<< tstruct.tm_yday << endl;
    // cout<< buf << endl;
    // cout<< Mktime << endl;
    // cout<<ast<<endl;

   // Sleep(2000);

    fullscreen();

    Boarder();
 load();

  //  GotoXY(387,456);
   // cout<<"hghgkhgkgh"<<endl;

    /*
    cout<<"Bootng..............."<<endl;
     Sleep(100);

    for(int i=0;i<50;i++){
         cout<<"-";
         Sleep(40);
    }

   // Sleep(2000);
    //system("cls");
    GotoXY(1000,1000);

    */

    Sleep(10000);



    return 0;

}
