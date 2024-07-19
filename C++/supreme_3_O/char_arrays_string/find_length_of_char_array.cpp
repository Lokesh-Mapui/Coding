#include <bits/stdc++.h>
using namespace std;
int getlength(char arr[], int size)
{
    int count = 0;
    int index = 0;
    while (arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}

int main()
{
    char arr[1000];
    cin >> arr;
    cout << getlength(arr,1000)<<endl;

    return 0;
}