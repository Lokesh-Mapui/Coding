#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter the size of the array: "<<" ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the array element: "<<endl;
        cin >> arr[i];
    }
    cout<<"The sum the arrray is: "<<" ";
     for(int i=0; i<n; i++){
         sum = sum + arr[i];
     }
    cout << sum << endl;
    return 0;
}