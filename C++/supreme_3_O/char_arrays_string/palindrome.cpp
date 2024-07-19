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

bool palindrome(char arr[],int n){
    int len=getlength(arr,n);
    int i=0;
    int j=len-1;
     while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
     }
     return true;
}

int main()
{
char arr[100];
cout<<"enter the word"<<endl;
cin>>arr;
int ans=palindrome(arr,100);

cout<<"palindrome or not :"<<ans<<endl;

return 0;    
}