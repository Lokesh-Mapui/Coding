#include<bits/stdc++.h>
using namespace std;

// void printdouble(int a ){
//     cout<<2*a<<" ";
// }


bool checkeven(int a){
    return a%2==0;
}


int main()
{
vector<int>arr(6);
arr[0]=10;
arr[1]=11;
arr[2]=12;
arr[3]=13;
arr[4]=14;
arr[5]=15;

auto it=partition(arr.begin(),arr.end(),checkeven);
for(int a:arr){
    cout<<a<<" ";
}


// auto it=unique(arr.begin(),arr.end());
// arr.erase(it,arr.end());
// for(int a:arr){
//     cout<<a<<" ";
// }

// cout<<"before shifting"<<endl;
// for(int a:arr){
//     cout<<a<<" ";
// }
// cout<<endl;
// rotate(arr.begin(),arr.begin()+2,arr.end());

// cout<<"after shifting"<<endl;
// for(int a:arr){
//     cout<<a<<" ";
// }

// sort(arr.begin(),arr.end());
// for(int a:arr){
//     cout<<a<<" ";

// }
// cout<<endl;

// reverse(arr.begin(),arr.end());
// for(int a:arr){
//     cout<<a<<" ";
    
// }

// int target=11;
// int ans=count_if(arr.begin(),arr.end(),checkeven);
// cout<<ans<<endl;

// auto it = find_if(arr.begin(),arr.end(),checkeven);
// cout<<*it<<endl;



// for_each(arr.begin(),arr.end(),printdouble);
// int target=40;
// auto it=find(arr.begin(),arr.end(),target);
// cout<<*it<<" ";
return 0;
}