#include<iostream>
#include <algorithm>
using namespace std;

int removeDuplicate(int arr[],int n){
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
}

int main()
{
    int arr[]= {0,0,1,1,1,2,3,2,2,3,4,5,4};
    int n=13;
    sort(arr,arr+n);
    int newsize = removeDuplicate(arr,n);
    cout<<newsize<<endl;

return 0;
}