#include<bits/stdc++.h>
using namespace std;

int fact(int n){
if(n==0){
    return 1;
}
int ans=n*fact(n-1);
return ans;
}

int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<fact(n);

    return 0;
}