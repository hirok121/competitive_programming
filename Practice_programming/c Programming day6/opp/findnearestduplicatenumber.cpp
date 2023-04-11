#include <iostream>
using namespace std;

int indexofdup(int arry[], int n);

int main()
{

   int n;
   cout << "input the lenth of arry  ";
   cin >> n;
   int arry[n];

   for (int i = 0; i < n; i++)
   {
      cin >> arry[i];
   }

   cout << "\nunsorted arry\n------------------------------------------\n";
   for (int i = 0; i < n; i++)
   {
      cout << arry[i] << " ";
   }
   cout << "\nsorted arry\n------------------------------------------\n";
   // calling function
   int index = indexofdup(arry, n);
   // for (int i = 0; i < n; i++)
   // {
   //    cout<<arry[i]<<" ";
   // }

   cout << "index of nearest duplicate number " << index + 1;
}

int indexofdup(int arry[], int n)
{

   for (int i = 0; i < n; i++)
   {

      for (int j = i + 1; j < n; j++)
      {
         if (arry[i] == arry[j])
         {
            return i;
         }
      }
   }
   return -1;
}