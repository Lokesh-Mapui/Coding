#include<bits/stdc++.h>
using namespace std;


// simple function way to reverse an array

// void reverseArray(int arr[],int size){
//     for(int i=size-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }

int main()
{
    int arr[100];
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // reverseArray(arr, size);

    // Reverse array in simple way without using function
    for(int i= size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }


return 0;
}