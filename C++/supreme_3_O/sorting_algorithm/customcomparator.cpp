#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
void printvv(vector<vector<int>>&arr){
    for(int i=0;i<arr.size();i++){
        vector<int>&temp=arr[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<" "<<b<<endl;
    }
}

// bool mycomp(int &a,int &b){
//     return a>b;
// }

int main()
{

vector<vector<int>>v;
int n;
cout<<"enter size :"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    int a,b;
    cout<<"enter a, b"<<endl;
    cin>> a >> b;
    vector<int>temp;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
}
cout<<"here are the values :"<<endl;
printvv(v);
cout<<"sorted by 1 st index"<<endl;
sort(v.begin(),v.end());
printvv(v);
// vector<int>arr={44,55,22,11,33};
// sort(arr.begin(),arr.end(),mycomp);
// print(arr);
return 0;
}