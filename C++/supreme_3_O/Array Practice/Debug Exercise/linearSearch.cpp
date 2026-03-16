#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: "<<" ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout <<" enter the array element: "<<" ";
        cin>>arr[i];
    }
    int val;
    cout<<"Enter the target element: "<< " ";
    cin>>val;

    int ans=linearSearch(arr,n,val);
    cout<<"Element found at index: "<<ans<<endl;

return 0;
}