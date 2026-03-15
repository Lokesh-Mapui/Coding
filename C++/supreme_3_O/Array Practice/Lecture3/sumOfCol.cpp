#include<bits/stdc++.h>
using namespace std;

void sumOfcol(int arr[][3],int m,int n){
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum of column "<<j<<" is: "<<sum<<endl;
    }
}

int main()
{
int arr[3][3]={{10,20,30},{27,69,42},{56,12,18}};
 int m=3;
 int n=3;
sumOfcol(arr,m,n);
return 0;
}