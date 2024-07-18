#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5], i, n;
    int ansindex=-1;
    printf("enter the numer in  array :");
    scanf("%d", &n);
    printf("enter the numer of  elements in araay: \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("enter the target :");
    scanf("%d", &target);

 
    int s=0,e=n-1,mid;
    

  while(s<=e)
    {
        mid=s + (e-s)/2;
        if (arr[mid] == target)
        {
            printf("target found at index no %d ",mid);
            return 0;
        }
        else if (target>arr[mid])
        {
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
        
    }
    printf("target not found");
    return 0;
}