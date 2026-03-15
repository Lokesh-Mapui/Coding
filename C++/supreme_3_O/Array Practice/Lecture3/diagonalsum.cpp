#include<bits/stdc++.h>
using namespace std;

void sumOfDiagonal2(int arr[][3],int m,int n){
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i+j == n-1){
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<"Sum of anti-diagonal element is: "<<sum<<endl;
}


void sumOfDiagonal(int arr[][3],int m,int n){
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<"Sum of diagonal element is: "<<sum<<endl;
}

int main()
{
int arr[3][3]={{10,20,30},{27,69,42},{56,12,18}};
 int m=3;
 int n=3;
sumOfDiagonal(arr,m,n);
sumOfDiagonal2(arr,m,n);
return 0;
}