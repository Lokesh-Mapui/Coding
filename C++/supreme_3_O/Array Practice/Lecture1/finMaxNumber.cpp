#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[],int size){
    int maxAns = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxAns){
            maxAns = arr[i];
        }
    }
    return maxAns;
}

int main()
{
int arr[100];
int size;
cout <<"Enter the number of elements :";
cin>>size;
for(int i = 0; i < size; i++){
    cout <<"Enter the elements at :"<<i<<"-> ";
    cin>>arr[i];
}
int maxResult = findMax(arr,size);
cout<<maxResult<<endl;

return 0;
}