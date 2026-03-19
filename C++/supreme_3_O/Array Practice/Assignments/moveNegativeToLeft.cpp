#include <iostream>
#include <vector>
using namespace std;

void moveNegativeNumberToLeft(int arr[],int n){
    int l =0;
    int h =n-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
}

int main()
{
int arr[]= {4,5,6,-3,-2,8,-1};
int n=7;
moveNegativeNumberToLeft(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}