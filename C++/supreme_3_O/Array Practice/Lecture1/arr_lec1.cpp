#include<bits/stdc++.h>
using namespace std;


void print(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void solve1(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*10;
    }
}

int main()
{

    int arr[] = {10,20,30,40,50};
    int size =5;

    solve1(arr,size);
    print (arr,size);








    // int arr[10];
    // int crr[] ={10,20,30,40}; 

    // int drr[4] = {0};

    // cout<<drr[0]<<endl;
    // cout<<crr[3]<<endl;

    // int arr[4];
    // fill(arr,arr+4,24);
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;/

    // int arr[5];
    // for(int i=0;i<5;i++){
    //     cout<<"Enter the value of :"<< i<<endl;
    //     cin>>arr[i];
    // }
    // for(int i=0; i<5;i++){
    //     cout<<i[arr]<<" ";
    // }


    



return 0;
}