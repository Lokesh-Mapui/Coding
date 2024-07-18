#include <bits/stdc++.h>
using namespace std;
void printsum(int n)
{
   int sum = 0;
   for (int i = 2; i <= n; i= i+2)
   {
      sum = sum + i;
   }
   cout << sum << endl;
}
int main()
{
   printsum(10);
   return 0;
}
