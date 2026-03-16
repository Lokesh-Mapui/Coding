#include<bits/stdc++.h>
using namespace std;

void arrange(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i=i+2){
        arr[j]=i+1;

        if(i+2<=n){
            arr[n-j-1]=i+2;
        }
        j++;

    }
}

int main()
{
    int n;
    cout<<"Enter the size: "<<" ";
    cin>>n;
    int arr[n];
    arrange(arr,n);
    cout << "The arranged array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}