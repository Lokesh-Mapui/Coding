#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[],int size){
    int minAns = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<minAns){
            minAns = arr[i];
        }
    }
    return minAns;
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
int minResult = findMin(arr,size);
cout<<minResult<<endl;

return 0;
}