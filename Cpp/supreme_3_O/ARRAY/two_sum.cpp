#include<bits/stdc++.h>
using namespace std;

bool checktwosum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {10,20,30,40};
    int n = 4;
  int target=35;
  int ans=checktwosum(arr,n,target);
  cout<<ans<<endl;


return 0;
}