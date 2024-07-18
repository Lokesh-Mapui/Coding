#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
void selecctionsort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n -1;i++){
       int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}

int main()
{
vector<int>arr={44,33,55,22,11};
selecctionsort(arr);
print(arr);

return 0;
}