#include<bits/stdc++.h>
using namespace std;

// pair<int,int> CheckTwoSum(int arr[],int n,int target){
//     pair<int,int>ans = make_pair(-1,-1);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 ans.first = arr[i];
//                 ans.second = arr[j];
//                 return ans;
//             }
//         }
//     }
// }


void CheckTwoSum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}

int main()
{
int arr[]={10,5,20,15,30};
int n = 5;
int target =35;
CheckTwoSum(arr,n,target);


// pair<int,int> ans = CheckTwoSum(arr,n,target);
// if(ans.first==-1 && ans.second==-1){
//     cout<<"No such pair exist"<<endl;
// }
// else{
//     cout<<"Pair is: ("<<ans.first<<","<<ans.second<<")"<<endl;
// }

return 0;
}