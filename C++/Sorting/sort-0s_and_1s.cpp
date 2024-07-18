#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9]={0,1,0,1,1,0,0,0,0};
    int n=9;
    int ans[9];
    int num0=0;
    int num1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            num0++;
        }
        else
        {
            num1++;
        }
    }
    for(int i=0;i<num0;i++)
    {
        ans[i]=0;
    }
    for(int i=num0;i<num0+num1;i++)
    {
        ans[i]=1;
    }
    cout<<"sorting of array is:";
    for (int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
