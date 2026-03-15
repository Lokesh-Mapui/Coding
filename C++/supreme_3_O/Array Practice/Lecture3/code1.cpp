#include<bits/stdc++.h>
using namespace std;

bool search2Darray(vector<vector<int>>arr,int target){
    int rowsize = arr.size();
    int colsize = arr[0].size();
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            if(arr[i][j]== target){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    // 2D array create using vector
    vector<vector<int>> arr (4, vector<int>(3,0));
    int rowsize = arr.size();
    int colsize = arr[0].size();

    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cout<<"Enter the Element: "<<" ";
            cin>>arr[i][j];
        }
    }
    int target =40;
    bool ans = search2Darray(arr,target);
    cout<<ans<<endl;


    // int arr[3][3];
    // for(int j=0;j<3;j++){
    //     for(int i=0;i<3;i++){
    //         cout<<"Enter the Element: "<<" ";
    //         cin>>arr[i][j];;
    //     }
    // }
    //     cout<<" the Elements are: "<<endl;
    //     for(int j=0;j<3;j++){
    //     for(int i=0;i<3;i++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }




    // int arr[3][3] ={
    //                 {10,20,30},
    //                 {40,50,60},
    //                 {70,80,90}
    //             };
    // int n=3, m=3;

    // for(int i=0;i<n;i++){
    //     cout<<arr[i][i]<<" ";
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(i==j){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Secondary diagonal

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(i + j == n - 1){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // for(int j=0;j<m;j++){
    //     for(int i=0;i<n;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    //declaring 2d array
    // int arr[4][3];

    // Initialise the 2d array
    // int arr[3][2] ={
    //                 {10,20},
    //                 {30,40},
    //                 {50,60}
    //                 };


    // int arr[3][2] = {10,20,30,40,50,60};

    // int arr[3][2] ={10,20}; 


    // cout<<arr[0][0]<<endl; //10

    // traverse the entire array
    // int n=3, m=2;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

return 0;
}