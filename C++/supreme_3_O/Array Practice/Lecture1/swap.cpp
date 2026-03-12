#include<bits/stdc++.h>
using namespace std;


int main()
{
 int a;
 cout<<"enter the value of a: ";
 cin>>a;
 int b;
 cout<<"enter the value of b: ";
 cin>>b;

//  using XOR operator

a=a^b;
b=a^b;
a=a^b;

// swapfunction

// swap(a,b);


//  using third variable

// int temp;
// temp= a;
// a=b;
// b=temp;


// using (+,- operator)

//  a=a+b;
//  b=a-b;
//  a=a-b;

 cout<<"after swaping value of a is "<<a<<endl;
 cout<<"after swaping value of b is "<<b<<endl;
return 0;
}