#include<bits/stdc++.h>
using namespace std;

int findMaximum2DArray(int arr[][3],int m, int n){
    int maxvalue = INT_MIN;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

         maxvalue = max(arr[i][j],maxvalue);

        // if(arr[i][j]>maxvalue){
        //     maxvalue = arr[i][j];
        // }
    }
 }

 return maxvalue;
    // cout<<"Maximum value in the 2D array is: "<<maxvalue<<endl;
}

int main()
{
int arr[3][3]={{700,23,41},{27,69,42},{56,12,18}};
 int m=3;
 int n=3;
 int ans = findMaximum2DArray(arr,m,n);
 cout<<ans;


return 0;
}