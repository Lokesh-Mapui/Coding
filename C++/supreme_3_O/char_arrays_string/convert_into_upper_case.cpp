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

void convertitnouppercase(char arr[],int n){
    int len =getlength(arr,n);
    for(int i = 0;i<len;i++){
        char ch=arr[i];
        ch=ch-'A'+'a';
        arr[i]=ch;
    }
}

int main()
{
char arr[100];
cout<<"enter the name"<<endl;
cin>>arr;
convertitnouppercase(arr,100);
cout<<arr<<endl;
    return 0;
}