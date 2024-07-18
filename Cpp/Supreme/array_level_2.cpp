// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={10, 20, 30};
//     int n = 3;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i] << "," << arr[j] << endl;
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int arr[] = {0, 1, 2, 3,4,5};
// int n = 6;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//         for (int k = 0; k < n; k++)
//         {
//             cout << arr[i]<<", " << arr[j]<<"," << arr[k]<<", " << endl;
//         }

// }
// }

// shift array's element
// #include <bits/stdc++.h>
// using namespace std;
// step=>1
// void shift(int arr[], int n)
// {
//     // step=>2
//     int temp = arr[n - 1];
//     for (int i = n - 1; i >= 1; i++)
//     {
//         arr[i] = arr[i - 1];
//     }
//     // step=>3
//     arr[0] = temp;
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int n = 6;
//     shift(arr, n);
// }

// unique eliment find
// #include <bits/stdc++.h>
// using namespace std;
// // int unique(int arr[],int n){
// // int ans=0;
// // for(int i=0;i<n;i++){
// // ans=ans^arr[i];
// // }
// // return ans;
// // }
// int main()
// {
//     // int arr[]={2,10,11,13,10,2,15,13,15};
//     // int n=9;
//     // int finalans=unique(arr,n);
//     // cout<<"final answer is:"<<finalans<<endl;


#include<bits/stdc++.h>
using namespace std;


int main()
{
int n=5; 
int &k=n;
int &c=n;
cout<<k<<endl;
cout<<c<<endl;
k++;
cout<<k<<endl;
cout<<c<<endl;
return 0;
}