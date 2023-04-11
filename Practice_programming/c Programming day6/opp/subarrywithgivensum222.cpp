#include <iostream>
using namespace std;
int sum = 33;

void subarrywithgivensum(int arry[], int n, int sum);

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

   int i = 0, j = 0, str = -1, end = -1, current_sum = 0;

   while (j < n && current_sum + arry[j] < sum)
   {
      current_sum += arry[j];
      j++;
   }
   cout << "current sum" << current_sum << endl;
   if (current_sum == sum)
   {
      cout << i << "to1 " << j << endl;
      return 0;
   }

   while (j < n)
   {
      current_sum += arry[j];
      while (current_sum > sum)
      {
         current_sum -= arry[i];
         i++;
      }
      if (current_sum == sum)
      {
         cout << i << "to2 " << j << endl;
         break;
      }

      j++;
   }

   // calling function
   subarrywithgivensum(arry, n, sum);
}

void subarrywithgivensum(int arry[], int n, int sum)
{

   int e, s, sum1 = 0;
   for (s = 0; s < n; s++)
   {
      sum1 = 0;
      for (e = s; e < n; e++)
      {

         sum1 += arry[e];

         if (sum1 == sum)
         {
            cout << "start " << s << " end " << e;
            return;
         }
      }
   }

   cout << "END";
}