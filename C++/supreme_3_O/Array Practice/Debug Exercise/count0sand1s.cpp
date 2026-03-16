#include<bits/stdc++.h>
using namespace std;

void sortZeroAndOne(int arr[],int n){
    int zerocount = 0 ;
    int onecount = 0 ;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount++;
        }
        else if(arr[i]==1){
            onecount++;
        }
    }
    cout<<"Total zeros: "<<zerocount<<endl;
    cout<<"Total ones: "<<onecount<<endl;
}

int main()
{
    int arr[] = {0,0,1,0,1,1,1,1,0};
    int n=9;
    sortZeroAndOne(arr,n);

return 0;
}