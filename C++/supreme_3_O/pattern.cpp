#include <bits/stdc++.h>
using namespace std;

int main()
{
  //  int n ;
  //  cout<<"ENTER THE number :";
  //  cin>>n;
  //  cout<<"the pattern is: "<<endl;
  //  for(int i=0;i<n;i++)
  //  {
  //   for(int j=0;j<n;j++)
  //   {
  //     cout<<" * ";
  //   }
  //   cout<<endl;
  //  }

  // rectangle Pattern

  //  for(int i=0;i<3;i++)
  //  {
  //   for(int j=0;j<7;j++)
  //   {
  //   cout<<" * ";
  //   }
  //   cout<<endl;
  //  }


//hollow rectangle
  // int rows, col;
  // cout << "enter the rows and col: ";
  // cin >> rows >> col;
  // for (int i = 0; i < rows; i++)
  // {
  //   for (int j = 0; j < col; j++)
  //   {
  //     if (i == 0 || i == rows - 1 || j == 0 || j == col - 1)
  //     {
  //       cout << " * ";
  //     }
  //     else
  //     {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }




  //half Pyramid
  //    int n ;
  //  cout<<"ENTER THE number :";
  //  cin>>n;
  //  cout<<"the pattern is: "<<endl;
  //  for(int i=0;i<n;i++)
  //  {
  //   for(int j=0;j<i+1;j++)
  //    {
  //     cout<<" * ";
  //    }
  //    cout<<endl;
  //  }


  //Inverted half Pyramid
  //      int n ;
  //  cout<<"ENTER THE number :";
  //  cin>>n;
  //  cout<<"the pattern is: "<<endl;
  //  for(int i=0;i<n;i++)
  //  {
  //   for(int j=0;j<n-i;j++)
  //    {
  //     cout<<" * ";
  //    }
  //    cout<<endl;
  //  }

 //hollow Inverted half Pyramid
       int n ;
   cout<<"ENTER THE number :";
   cin>>n;
   cout<<"the pattern is: "<<endl;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n-i;j++){
    if(i==0||j==0||j=n-i)
     {
      cout<<" * ";
     }
     else
     {
      cout<<" ";
     }
    }
     cout<<endl;
   }
  return 0;
}