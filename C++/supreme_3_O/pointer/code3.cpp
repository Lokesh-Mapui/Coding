#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  array-> stack memiory
    // int arr[5]={0};
    // cout<<arr[0]<< " , "<<arr[1]<< " , "<<arr[2]<<endl;

    // array ->heap memory
    int *prr = new int[5];
    cout << prr[0] << " , " << prr[1] << " , " << prr[2] << endl;

    // 2D array-> stack memory
    // int arr[2][4] = {
    //     {2, 4, 6, 8},
    //     {1, 2, 3, 4}};
    // 2D array-> heap memory
    int** arr= new int *[4];
    for(int i=0;i<4;i++){
        arr[i]=new int[3];
    }
  
    // integer->stack memory
    // int a = 5;
    // cout<<a<<endl;
    // integer- > heap memory
    // int *p=new int ;
    // *p=5;
    // cout<<*p<<endl;
    // dellocate - > delete keyword
    // delete p;
    return 0;
}