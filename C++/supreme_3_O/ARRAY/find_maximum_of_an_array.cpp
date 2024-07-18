#include<bits/stdc++.h>
using namespace std;

int FINDMAX(int arr[],int n){
    int maxans=INT_MIN;
    for(int i=0;i<n;i++){
        maxans=max(maxans,arr[i]);
    }
    return maxans;
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
cout<<"max number is :"<<FINDMAX(arr,size)<<endl;


return 0;
}