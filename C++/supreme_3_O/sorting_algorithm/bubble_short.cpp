#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j > n -i - 1; j++)
        {
            swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{
    vector<int> arr = {6, 4,3, 2, 1};
    bubblesort(arr);
    print(arr);
    return 0;
}