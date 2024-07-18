#include<bits/stdc++.h>
using namespace std;


int main()
{

unordered_map<string,string>table;
// 1 tarika insert karne ka 
table["in"]="india";
// 2 tarika insert karne ka 
table.insert(make_pair("en","england"));
// 3 tarika insert karne ka
pair<string,string>p;
p.first="br";
p.second="brazil";
table.insert(p);


cout<<table.size()<<endl;


table.clear();
cout<<table.size()<<endl;


if(table.empty()==true){
    cout<<"map is empty"<<endl;
}
else{
    cout<<"map is not empty"<<endl;
}



return 0;
}