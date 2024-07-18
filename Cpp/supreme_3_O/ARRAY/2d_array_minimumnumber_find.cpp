#include <bits/stdc++.h>
using namespace std;
int findminimumnumber(int arr[][3],int rowsize,int colsize){
  int minimumvalue=INT_MAX;
  for(int i=0;i<rowsize;i++){
    for(int j=0;j<colsize;j++){
      minimumvalue=min(minimumvalue,arr[i][j]);
    }
  }
  return minimumvalue;
}
int main() {
int arr[3][3]={
  {20,32,41},
  {27,69,42},
  {56,12,18}
};
int rowsize=3;
int colsize=3;
int ans=findminimumnumber(arr,rowsize,colsize);
cout<<ans<<endl;
  return 0;
}