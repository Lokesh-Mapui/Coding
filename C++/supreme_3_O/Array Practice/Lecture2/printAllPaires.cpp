#include<bits/stdc++.h>
using namespace std;

void printallpaires(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}

int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    printallpaires(arr,n);
return 0;
}