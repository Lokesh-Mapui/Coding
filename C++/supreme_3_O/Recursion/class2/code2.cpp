#include<bits/stdc++.h>
using namespace std;

int binearysearchrecursive(int arr[],int n,int s,int e,int target){
    // base case
    if(s>e){
        return-1;
    }
    int mid=(s+e)/2;
    // 1 case mai sambahalungaz
    if(arr[mid]==target){
        return mid;
    }
    if(target>arr[mid]){
        s=mid+1;
        return binearysearchrecursive(arr,n,s,e,target);
    }
    else{
        e=mid-1;
        return binearysearchrecursive(arr,n,s,e,target);
    }
}







// iterative loop
// int binarysearch(int arr[],int size,int target){
//     int s=0;
//     int e=size-1;
//     int mid=(s+e)/2;
//     while(s<=e){
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(target>arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//     }
//     mid=(s+e)/2;
//     }
//     return-1;
// }

int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int n=7;
    int s=0;
    int e=n-1;
    int target=60;
    int ans=binearysearchrecursive(arr,n,s,e,target);
    cout<<"ans index is: " <<ans<<endl;


// int arr[]={10,20,30,40,50,60,70};
// int size=7;
// int target=60;
// int ans=binarysearch(arr,size,target);
// cout<<"ans index is: " <<ans<<endl;
return 0;
}