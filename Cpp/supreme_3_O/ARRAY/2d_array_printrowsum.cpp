#include <bits/stdc++.h>
using namespace std;
void printrowsum(int arr[][3],int rowsize,int colsize){
  for(int i=0;i<rowsize;i++){
      int sum=0;
    for(int j=0;j<colsize;j++){

      sum=sum+arr[i][j];
    }
    cout<<sum<<endl;
  }
}
int main() {
int arr[3][3]={
  {10,20,30},
  {40,50,60},
  {70,80,90}
};
int rowsize=3;
int colsize=3;
printrowsum(arr,rowsize,colsize);
  return 0;
}