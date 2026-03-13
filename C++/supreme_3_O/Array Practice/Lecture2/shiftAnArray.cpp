#include<bits/stdc++.h>
using namespace std;

void rotatearray(int arr[],int n,int shift){
    int finalshift = shift%n;
    if(finalshift==0){
        return;
    }
    // step1: copy last n elements into a temp array
    int temp[1000];
    int index= 0;
    for(int i=n-finalshift;i<n;i++){
        temp[index]=arr[i];
        index++;
    }
    // step2: shift array elements by finalshift places
      for(int i=n-1;i>=0;i--){
        if(i-finalshift>=0){
            arr[i]=arr[i-finalshift];
        }
      }
    //   step3: copy temp array elements into original array
      for(int i=0;i<finalshift;i++){
        arr[i]=temp[i];
      }

}

int main()
{
int arr[] = {10,20,30,40,50,60};
int n=6;
int shift = 4;
cout<<"Before shifting the array is: "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
rotatearray(arr,n,shift);
cout<<"After shifting the array is: "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}