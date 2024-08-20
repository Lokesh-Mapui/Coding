#include<bits/stdc++.h>
using namespace std;

int main(){
    
stack<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
// check size
cout<<s.size()<<endl;
// check empty or not
cout<<s.empty()<<endl;
// peek
cout<<s.top()<<endl;
// po karne ke baaad
s.pop();
cout<<s.top()<<endl;

    return 0;
}