#include<bits/stdc++.h>
using namespace std;

// void zerosandOnes(int arr[],int n){
//     int zerocount=0;
//     int onecount=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             zerocount++;
//         }
//         else if(arr[i]==1){
//             onecount++;
//         }
//     }
    //insertion

    // fill(arr,arr+zerocount,0);
    // fill(arr+zerocount,arr+n,1);

    // for(int i=0;i<zerocount;i++){
    //     arr[i]=0;
    // }
    //     for(int i=zerocount;i<n;i++){
    //     arr[i]=1;
    // }
// }

int main()
{
int arr[]={0,1,1,0,1,0,1,0,0,1,1};
int n= 11;

sort(arr,arr+n);

// zerosandOnes(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
}