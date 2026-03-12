#include<bits/stdc++.h>
using namespace std;

void printZerosAndOnes(int arr[],int size){
    int zerocount = 0;
    int onecount = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount++;
        }
        else if(arr[i]==1){
            onecount++;
        }
    }
    cout<<"TotalZeros: "<<zerocount<<endl;
    cout<<"TotalOnes: "<<onecount<<endl;
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
printZerosAndOnes(arr,size);

return 0;
}