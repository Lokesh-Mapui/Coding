#include <bits/stdc++.h>
using namespace std;
void findfirstoccurance(int arr[], int n, int target, int ansindex)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ansindex = mid;
            e = mid - 1;
        }
        while (target < arr[mid])
        {
            s = mid + 1;
        }

        while (target > arr[mid])
        {
            e = mid - 1;
        }
        mid = s + e / 2;
    }
}

int main()
{
    int arr[] = {20, 20, 20, 30, 40, 50, 60, 70};
    int n = 8;
    int target = 20;
    int ansindex = -1;
    findfirstoccurance(arr, n, target, ansindex);
    cout << "first occuranceis :" << ansindex << endl;
    return 0;
}