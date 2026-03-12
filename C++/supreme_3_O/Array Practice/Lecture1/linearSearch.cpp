#include<bits/stdc++.h>
using namespace std;

bool findTarget(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        int currentElement = arr[i];
        if(currentElement == target){
            return true;
        }
    }
    return false;
}

int main()
{

int arr[100];
int size;
cout <<"Enter the number of elements :";
cin>>size;
for(int i = 0; i < size; i++){
    cout <<"Enter the elements at :"<<i<<"-> ";
    cin>>arr[i];
}
 int target;
 cout <<"Enter the target element :";
 cin>>target;
bool result = findTarget(arr,size,target);
cout<<result<<endl;
return 0;
}