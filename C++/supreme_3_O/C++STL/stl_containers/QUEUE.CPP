#include<bits/stdc++.h>
using namespace std;


int main()
{
queue<int>first;
queue<int>second;

first.push(10);
first.push(20);
first.push(30);
first.push(40);


second.push(100);
second.push(200);
second.push(300);
second.push(400);



first.swap(second);
cout<<first.front()<<endl;
cout<<first.back()<<endl;


// queue<int>q;
// q.push(10);
// q.push(20);
// q.push(30);
// q.push(40);

// cout<<q.size()<<endl;

// q.pop();
// cout<<q.size()<<endl;
// cout<<"front ->"<<q.front()<<endl;
// cout<<"front ->"<<q.back()<<endl;

// if(q.empty()==true){
//     cout<<"queue is empty"<<endl;
// }
// else{
//     cout<<"queue Is not empty"<<endl;
// }

return 0;
}