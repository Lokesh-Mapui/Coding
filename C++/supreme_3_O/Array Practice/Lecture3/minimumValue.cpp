#include<bits/stdc++.h>
using namespace std;

int findMinimum2DArray(int arr[][3],int m, int n){
    int minvalue = INT_MAX;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

        minvalue = min(arr[i][j],minvalue);

        // if(arr[i][j]<minvalue){
        //     minvalue = arr[i][j];
        // }
    }
 }

 return minvalue;
    // cout<<"Minimum value in the 2D array is: "<<minvalue<<endl;
}

int main()
{
int arr[3][3]={{70,23,41},{27,69,42},{56,12,18}};
 int m=3;
 int n=3;
 int ans = findMinimum2DArray(arr,m,n);
 cout<<ans;


return 0;
}