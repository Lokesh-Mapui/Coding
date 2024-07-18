#include<bits/stdc++.h>
using namespace std;

void rotatearray (int arr[],int n,int shift){
    int finalshift=shift%n; 
    if(finalshift==0){
        return;
    }
    //step 1 => copy last finalshift elements into last array
    int temp[10000];
    int index=0;
    for(int i=n-finalshift;i<n;i++){
        temp[index]=arr[i];
        index++;
    }
    //step 2 =>shift array elements by finalshift places
    for(int i=n-1;i>=0;i--){
        arr[i]=arr[i-finalshift];
    }

    //step 3=>copy temp elements into original array

    for(int i=0;i<finalshift;i++){
        arr[i]=temp[i];
    }
}


int main()
{
int arr[] = {10,20,30,40,50,60};
int n = 6;
int shift=2;


cout<<"before shifting :"<<endl;
for(int i=0;i<n ;i++){
    cout<<arr[i]<<endl;
}

rotatearray(arr,n,shift);

cout<<"after shifting :"<<endl;
for(int i=0;i<n ;i++){
    cout<<arr[i]<<endl;
}

return 0;
}