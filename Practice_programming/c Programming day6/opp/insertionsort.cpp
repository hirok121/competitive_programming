#include <iostream>
using namespace std;

void bubblesort(int arry[], int n);

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
   bubblesort(arry, n);
   for (int i = 0; i < n; i++)
   {
      cout << arry[i] << " ";
   }
}

void bubblesort(int arry[], int n)
{

   for (int i = 1; i < n; i++)
   {
      int current = arry[i];
      int j = i - 1;
      while (current < arry[j] && j >= 0)
      {
         arry[j + 1] = arry[j];
         j--;
      }

      arry[j + 1] = current;
   }
}