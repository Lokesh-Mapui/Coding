#include<bits/stdc++.h>
using namespace std;

void extremePrint(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(i==j){
            cout<<arr[i]<<" ";
            break;
        } 
        else{
            cout<<arr[i]<<" ";
            i++;
            cout<<arr[j]<<" ";
            j--;
        }
    }
}

int main()
{
int arr[]={10,20,30,40,50,60,70};
int size= 7;
extremePrint(arr,size);

return 0;
}