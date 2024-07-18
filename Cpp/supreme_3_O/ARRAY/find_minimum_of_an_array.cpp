#include<bits/stdc++.h>
using namespace std;
int findminimum(int arr[],int size){
    int minans=INT_MAX;
    for(int i=0;i<size;i++){
        minans=min(minans,arr[i]);
    }
    return minans;
}

int main()
{
int arr[100];

int size;
cout<<"enter the number of element:";
cin>>size;

for (int i=0;i<size;i++){
    cout<<"enter the input value for index :"<<i<<endl;
    cin>>arr[i];
}
int ans=findminimum(arr,size);
cout<<"minimum is :"<<ans<<endl;
return 0;
}