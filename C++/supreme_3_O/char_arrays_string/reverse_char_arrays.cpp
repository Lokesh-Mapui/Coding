#include<bits/stdc++.h>
using namespace std;

int getlength(char arr[], int size)
{
    int count = 0;
    int index = 0;
    while (arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}


void reversechararray(char arr[],int n){
     int len=getlength(arr,n);
    int i=0;
    int j=len-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}


// void convertitnouppercase(char arr[],int n){
//     int len =getlength(arr,n);
//     for(int i = 0;i<n;i++){
//         char ch=arr[i];
//         ch=ch-'a'+'A';
//         arr[i]=ch;
//     }
// }

int main()
{
char arr[100];
cout<<"enter the name"<<endl;
cin>>arr;
cout<<"before :"<<arr<<endl;
reversechararray( arr, 100);
cout<<"after :"<<arr<<endl;
reversechararray( arr, 100);

// cout<<arr<<endl;
return 0;
}