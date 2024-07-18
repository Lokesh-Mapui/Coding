#include<bits/stdc++.h>
using namespace std;


int main()
{
 vector<int>arr;
arr.push_back(22);
arr.push_back(11);
arr.push_back(55);
arr.push_back(56);
arr.push_back(77);

make_heap(arr.begin(),arr.end());

// for(int a:arr){
// cout<<a<<" ";
// }cout<<endl;
arr.push_back(99);
push_heap(arr.begin(),arr.end());
cout<<"before delet :";
for(int a:arr){
cout<< a <<" ";
}cout<<endl;


//deletion
pop_heap(arr.begin(),arr.end());
arr.pop_back();
cout<<"after delet :";
for(int a:arr){
cout<< a <<" ";
}cout<<endl;
cout<<"after sort :";
sort_heap(arr.begin(),arr.end());
for(int a:arr){
cout<< a <<" ";
}cout<<endl;
return 0;
}