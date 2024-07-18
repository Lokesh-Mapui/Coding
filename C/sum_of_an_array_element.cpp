// sum_of_an_array_element
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
int sum=0;
int arr[50];
printf("enter the number of element: ");
scanf("%d",&n);
printf("enter the array element: ");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
    sum=sum+arr[i];
}
printf("the sum of all the  array element:%d",sum);
return 0;
}