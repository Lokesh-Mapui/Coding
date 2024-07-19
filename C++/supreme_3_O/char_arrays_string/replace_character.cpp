#include <bits/stdc++.h>
using namespace std;

void replacecharacter(char originalcharacter,char newcharacter,char arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==originalcharacter){
            arr[i]=newcharacter;
        }
    }
}

int main()
{
char arr[100];
cin>>arr;
replacecharacter('@',' ',arr,100);
cout<<arr<<endl;

    return 0;
}