#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[],int n){
    for(int i=0;i<n-1;i=i+2){
        int temp= arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}

int main()
{
int n;
cout<<"enter the size of the array: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"Enter the array elements: "<<endl;
    cin>>arr[i];
}
swapAlternate(arr,n);

cout<<"Array after swapping: "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}