#include<bits/stdc++.h>
using namespace std;

void TransposeOfMatrix(int arr[][3],int m,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    cout<<"Transpose of the matrix is: "<<endl;
    
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // int ans[100][100];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         ans[i][j]=arr[j][i];
    //     }
    // }

    //     for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}

int main()
{
int arr[3][3]={
    {10,11,12},
    {20,21,22},
    {30,31,32}
};

 int m=3;
 int n=3;
TransposeOfMatrix(arr,m,n);
return 0;
}