#include<bits/stdc++.h>
using namespace std;

void sumOfRow(int arr[][3],int m,int n){
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum of row "<<i<<" is: "<<sum<<endl;
    }
}

int main()
{
int arr[3][3]={{10,20,30},{27,69,42},{56,12,18}};
 int m=3;
 int n=3;
sumOfRow(arr,m,n);
return 0;
}