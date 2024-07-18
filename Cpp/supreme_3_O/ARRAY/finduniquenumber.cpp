#include<bits/stdc++.h>
using namespace std;
int finduniquenumber(int arr[],int n){
    int num=0;
    for(int i=0;i<n;i++){
       num= num^arr[i];
    }
    return num;
}

int main()
{
int arr[]={4,7,8,8,4,9,9};
int n=7;
int ans = finduniquenumber(arr,n);
cout<<"unique number is :"<<ans<<endl;
return 0;
}