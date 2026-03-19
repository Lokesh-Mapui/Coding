#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[],int n){
    int j =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
}

int main()
{
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<" Enter the array Elements: "<<" ";
        cin>>arr[i];
    }
    pushZerosToEnd(arr,n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

return 0;
}