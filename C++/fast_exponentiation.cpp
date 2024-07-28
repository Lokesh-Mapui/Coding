#include<bits/stdc++.h>
using namespace std;

int fastexponential(int a ,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=ans*a;
        }
        a=a*a;
        b>>=1;
    }
    return ans;
}


int slowexponential (int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
int a=5;
int b=4;
cout<<slowexponential(a,b)<<endl;
cout<<fastexponential(a,b)<<endl;


    return 0;
}