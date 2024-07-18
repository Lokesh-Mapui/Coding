#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the no of student:";
cin>>n;
int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }
while (int i=0;i<n;i++)
{
    cin>>arr[i];

}
cout<<"The marks are :"<<endl;
// for(int i=0; i<n; i++)
// {
//     cout<<arr[i]<<" ";
// }
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}

return 0;
}