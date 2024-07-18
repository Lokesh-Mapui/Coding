#include <bits/stdc++.h>
using namespace std;

int findmaximumvalue2Darray(int arr[][4], int rowsize, int colsize)
{
    int maxvalue = INT_MIN;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            maxvalue = max(maxvalue, arr[i][j]);
        }
        return maxvalue;
    }
}

int main()
{
    // intitalize
    int arr[3][4] = {
        {70, 23, 41, 7},
        {29, 42, 69, 56},
        {56, 12, 18, 23}};
    int rowsize = 3;
    int colsize = 4;
    int ans = findmaximumvalue2Darray(arr, rowsize, colsize);
    cout << ans << endl;
}