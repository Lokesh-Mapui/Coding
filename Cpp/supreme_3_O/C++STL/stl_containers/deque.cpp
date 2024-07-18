#include<bits/stdc++.h>
using namespace std;


int main()
{
deque<int>dq;

dq.push_back(10);
dq.push_back(20);
dq.push_back(30);
dq.push_back(40);

dq.push_front(100);
dq.push_front(200);
dq.push_front(300);
dq.push_front(400);


dq.pop_front();
dq.pop_back();

cout<<dq.size()<<endl;
dq.clear();
cout<<dq.size()<<endl;


cout<<dq.front()<<endl;
cout<<dq.back()<<endl;

if(dq.empty()==true){
    cout<<"deque is empty"<<endl;
}
else{
    cout<<"deque is not empty"<<endl;
}

dq.insert(dq.begin(),101);
cout<<dq.at(0);
// cout<<dq.at(0)<<endl;

// deque<int>::iterator it=dq.begin();
// while(it !=dq.end()){
//     cout<<*it<<" ";
//     it++;
// }


return 0;
}