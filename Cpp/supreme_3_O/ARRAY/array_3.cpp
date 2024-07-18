#include <bits/stdc++.h>
using namespace std;



bool search2Darraay(int arr[][2],int rowsize,int colsize,int target){
       for (int i = 0; i < rowsize; i++){
             for (int j = 0; j < colsize; j++)
             {
               if(arr[i][j]==target){
                    return true;
               }
             }
        }
}


int main()
{
    int arr[3][2]={
                   {10,20},
                   {30,40},
                   {45,50}
                    };
    int rowsize = 3;
    int colsize = 2;
    int target=45;
 bool ans=search2Darraay(arr,rowsize,colsize,target);
        cout<<ans<<endl;

return 0;
}