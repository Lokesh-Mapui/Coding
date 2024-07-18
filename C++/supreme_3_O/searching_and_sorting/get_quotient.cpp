#include <bits/stdc++.h>
using namespace std;
int getquotient(int divident, int divisor)
{
    int s = -divident;
    int e = divident;
    int mid = s + ((e - s) >> 1);
    int ans = -1;
    while (s <= e)
    {
        if (divisor * mid == divident)
        {
            return mid;
        }
        if ((divisor * mid) < divident)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + ((e - s) >> 1); 
    }
    return ans;
}
int main()
{
    int divident = 10;
    int divisor = 2;
    int ans = getquotient(abs(divident), abs(divisor));
    if ((divident < 0 && divisor > 0) || (divident > 0 && divisor < 0))
        {
            ans = 0 - ans;
        }
    cout << "final ans is :" << ans << endl;

    return 0;
}