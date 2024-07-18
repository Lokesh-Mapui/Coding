#include<bits/stdc++.h>
using namespace std;


int main()
{

list<int>first;
list <int> second;
first.push_back(10);
first.push_back(20);
first.push_back(30);

// second.push_back(100);
// second.push_back(200);
// second.push_back(300);

first.insert(first.begin(),100);

list<int>::iterator it=first.begin();
while(it!=first.end()){
    cout<<*it<<" ";
    it++;
}

// cout<<"befor swap :";
// list<int>::iterator it=first.begin();
// while(it!=first.end()){
//     cout<<*it<<" ";
//     it++;

// }cout<<endl;

// first.swap(second);

// cout<<"after swap :";
// list<int>::iterator it2=first.begin();
// while(it2!=first.end()){
//     cout<<*it2<<" ";
//     it2++;
// }cout<<endl;




// list<int>mylist;
// mylist.push_back(10);
// // 28
// mylist.push_back(23);
// // 28->23
// mylist.push_back(25);
// // 28->23->25
// mylist.push_back(50);
// // 28->23->25->50
// mylist.push_front(19);
// // 19->28->23->25->50
// mylist.pop_back();
// // 19->28->23->25
// mylist.pop_front();
// // 28->23->25
// mylist.push_back(10);
// // 28->23->25->10

// cout<<"befor removel :";
// list<int>::iterator it=mylist.begin();
// while(it!=mylist.end()){
//     cout<<*it<<" ";
//     it++;

// }cout<<endl;

// mylist.remove(10);

// cout<<"after removel :";
// list<int>::iterator it2=mylist.begin();
// while(it2!=mylist.end()){
//     cout<<*it2<<" ";
//     it2++;
// }cout<<endl;


// cout<<mylist.front()<<endl;
// cout<<mylist.back()<<endl;

// cout<<"my size is :"<<mylist.size()<<endl;
// mylist.clear();
// cout<<"my size is :"<<mylist.size()<<endl;

// if(mylist.empty()==true){
//     cout<<"list is empty"<<endl;
// }
// else{
//     cout<<"list is not empty"<<endl;
// }





return 0;
}