#include<bits/stdc++.h>
using namespace std;

// void fun(int a[],int n ){
//     cout<<"Array elements are: "<<endl;
//     for(int i=0;i<n; i++){
//         cout<<a[i]<<" ";
//     }
// }



void print(vector<int>v){
    cout<<"Elements are: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void print2(vector<int>v){
    cout<<"Elements are: "<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{

    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print2(v);

    // vector<char>v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');
    // cout<<"Front Element: "<<v[0]<<endl;
    // cout<<"Back Element: "<<v[v.size()-1]<<endl;



    //Vector initilization
    // vector<int>arr; // default with no data zero size
    // vector<int>arr2(5,-1);   //init with n size with specific data
    // arr2.push_back(50);
    // print(arr2);

    // vector<int>arr3={1,2,3,4,5};
    // arr3.pop_back();
    // print(arr3);

    // vector<int>arr4{1,2,3,4,5};
    // print(arr4);

    // how to copy vector
    // vector<int>arr5={1,2,3,4,5};
    // vector<int>arr6(arr5);
    // print(arr6);



    // vector<int>v;
    // int n;
    // cout <<"Enter the number of Elements; ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     v.push_back(data);
    // }
    // print(v);
    // for(int i=0;i<n;i++){
    //     v.push_back(24);
    // }

    // i want to clear the vector
      

    // print(v);





    // while(1){
    //     int data;
    //     cin>>data;
    //     v.push_back(data);
    //     cout<<" capacity:"<<v.capacity()<<"size:"<<v.size()<<endl;
    // }

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // print(v);

    // v.pop_back();
    // cout<<"After pop_back() "<<endl;
    // print(v);




    // Static memory allocation of array 
    // int arr[5]={1,2,3,4,5};

    // Dynamic memory allocation of array

    // int n;
    // cout<<"Enter the size of the array: ";
    // cin>>n;
    // int * arr = new int [n];

    // cout<<"Enter elements: "<<endl;

    // // taking n elements input and inserting in array
    // for(int i=0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     arr[i]=data;
        
    // }

    // // try to insert more items
    // arr[n]=80;
    // fun(arr,n);



return 0;
}