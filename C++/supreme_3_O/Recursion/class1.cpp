#include<bits/stdc++.h>
using namespace std;

// counting n->1
void printcounting(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printcounting(n-1);
}

// counting 1->n
void printcount(int n){
    if(n==0){
        return;
    }
    printcount(n-1);
    cout<<n<<" ";
}

// factorial found
int getfactoril(int n){
    // base case
    if(n==0||n==1){
        return 1;
    }
    // recursive call
    // factorial(n)=n*factorial(n-1)
    // chotti problem->fact(n-1)
    int recursionkaAns=getfactoril(n-1);
    int finalans=n*recursionkaAns;
    return finalans;
    // processing
}

int pow(int n){
    if(n==0){
        return 1;
    }
    int reckAns=pow(n-1);
    int finalans=2*reckAns;
    return finalans;
}

int fibo(int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    // recursive relation
    int ans=fibo(n-1)+fibo(n-2);
    return ans;
}

int getsum(int n){
    if(n==0){
        return 0;
    }
    int ans=getsum(n-1)+n;
    return ans;
}

int main()
{   
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<getsum(n);
    
    // cout<<fibo(9);

    // cout<<pow(10);

//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//    printcount(n);
   
    // int n;
    // cout<<"enter the value of n: ";
    // cin>>n;
    // printcounting(n);

    // int n;
    // cout<<"enter the value of n: ";
    // cin>>n;
    // int ans=getfactoril(n);
    // cout<<"factorial of "<<n <<" is: "<<ans<<endl;


    return 0;
} 