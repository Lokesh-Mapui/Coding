#include<bits/stdc++.h>
using namespace std;


int main()
{

vector<int>arr;

arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(40);
arr.push_back(50);

auto it=min_element(arr.begin(),arr.end());
cout<<*it<<" ";

// int a=10;  
// int b=15;
//  cout<<"min is :"<<min(a,b)<<endl;
//  cout<<"max is :"<<max(a,b)<<endl;
return 0;
}