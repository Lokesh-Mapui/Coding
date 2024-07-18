#include<bits/stdc++.h>
using namespace std;


int main()
{


// vector<vector<int>>marks(4,vector<int>(3,5));
// int totalrows=marks.size();
// int totalcolomns=marks[0].size();

// cout<<"total rows is :"<<totalrows<<endl;
// cout<<"total column is :"<<totalcolomns<<endl;

vector<vector<int>>arr(4);
arr[0]=vector<int>(4);
arr[1]=vector<int>(2);
arr[2]=vector<int>(5);
arr[3]=vector<int>(3);

int totalrows=arr.size();
int totalcolomns=arr[0].size();

cout<<"total rows is :"<<totalrows<<endl;
// cout<<"total column is :"<<totalcolomns<<endl;



// vector<int>first;
// // vector<int>second;

// first.push_back(14);
// first.push_back(15);
// first.push_back(16);
// first.push_back(17);

// vector<int>::iterator it=first.begin();

// while(it!=first.end()){
//     cout<<*it<<endl;
//     it++;
// }


// second.push_back(100);
// second.push_back(200);
// second.push_back(300);
// second.push_back(400);

// first.swap(second);

// cout<<first.at(0)<<" "<<first[1]<<" "<<first[2]<<" "<<first[3]<<endl; 

// for(int i:first){
//     cout<<i<<endl;
// }
// for(int i:second){
//     cout<<i<<endl;
// }

// vector<int>marks;
// marks.push_back(10);
// marks.push_back(20);
// marks.push_back(30);
// marks.push_back(40);

// marks.reserve(20);
// cout<<marks.capacity()<<endl;

// cout<<marks.max_size()<<endl;
// marks.clear();


// marks.insert(marks.begin(),50);
 
// marks.erase(marks.begin(),marks.end());


// cout<<marks[0]<<endl;
// cout<<marks.at(0)<<endl;


// cout<<"size is :"<<marks.size()<<endl;;

// pop_back se last element gayab hota hai
// marks.pop_back();

// cout<<"size is :"<<marks.size()<<endl;;

// if(marks.empty()==true){
//     cout<<"vector is empty"<<endl;
// }
// else{
//     cout<<"vector is not empty"<<endl;
// }

// cout<<marks.capacity()<<endl;

// cout<<marks.front()<<endl;
// cout<<marks.back()<<endl;

// cout<<*marks.begin()<<endl;

return 0;
}