// reverse_an_array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    printf("my array is:");
    for(int i=0;i<8;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nreverse an array is:");
    for(int i=7;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}