#include<bits/stdc++.h>
using namespace std;


int main()
{
    int num=234;
    int reverse;
    while(num>0)
    {

        reverse=num%10;
        cout<<reverse;
        num=num/10;
    }
return 0;
}