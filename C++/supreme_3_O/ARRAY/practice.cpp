#include<bits/stdc++.h>
using namespace std;
// linear search
// bool linearsearch(int arr[],int n,int target){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return true;
//         }
//     }
//     return false;
// }


// count 0's and 1's

// void countzeroone(int arr[],int n){
//     int zerocount=0;
//     int onecount=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             zerocount++;
//         }
//         if(arr[i]==1){
//             onecount++;
//         }
//     }
//     cout<<"zerocount is: "<<zerocount<<endl;
//     cout<<"onecount is: "<<onecount<<endl;
// }

// find unique element

//  int finduniqueelement(int arr[],int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
//  }

// print pair

// void printallpairs(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i]<<","<<arr[j]<<endl;
//         }
//     }
// }

// print triplates

// void printalltriplates(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=0;k<n;k++){
//                 cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//             }
//         }
//     }
// }


// reverse array
// void reversearray(int arr[],int n){
//     int left=0;
//     int right=n-1;
//     while(left<=right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
// }

// extreme print
// void extremeprint(int arr[],int n){
//     int left=0;
//     int right=n-1;
//     while(left<=right){
//         if(arr[left]==arr[right]){
//             cout<<arr[left]<<endl;
//         }
//         else{
//             cout<<arr[left]<<endl;
//             cout<<arr[right]<<endl;
//         }
//         left++;
//         right--;
//     }
// }




// bool search2darray(int arr[][4],int rowsize,int colsize,int target){
//     for(int i=0;i<rowsize;i++){
//         for(int j=0;j<colsize;j++){
//             if(arr[i][j]==target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }




int main ()
{




    
//     int arr[][4]={
//                   {10,20,30,40},
//                   {50,55,57,59},
//                   {69,72,79,89}
//                   };
//     int target=99;
//     int rowsize=3;
//     int colsize=4;
// bool ans=search2darray(arr,rowsize,colsize,target);
// cout<<"ans is: "<<ans<<endl;




    // int arr[]={10,20,30,40,50};
    // int n=5;
    // extremeprint(arr,n);


    // int arr[]={10,20,30,40,50,60};
    // int n=6;
    // reversearray(arr,n);


    // int arr[]={10,20,30,40};
    // int n=4;
    // printalltriplates(arr,n);


    // int arr[]={10,20,30,40};
    // int n=4;
    // printallpairs(arr,n);

    // int arr[]={2,3,4,5,4,3,2};
    // int n=7;
    // int ans=finduniqueelement(arr, n);
    // cout<<ans<<endl;

    // int arr[]={0,1,1,1,0,0,1,1};
    // int n=8;
    // countzeroone(arr,n);


    // int arr[]={2,4,6,8,10};
    // int n=5;
    // int target=10;
    // bool ans=linearsearch(arr,n,target);
    // if(ans==1){
    //     cout<<"target found"<<endl;
    // }
    // else{
    //     cout<<"target not found"<<endl;
    // }

    return 0;
}