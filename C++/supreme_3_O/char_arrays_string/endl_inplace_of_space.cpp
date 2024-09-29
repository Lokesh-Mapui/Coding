#include<bits/stdc++.h>
using namespace std;


int main()
{
    
char arr[100];
cin.getline(arr,15,'\n');

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == ' ') {
            arr[i] = '\n';
        }
    }
    cout << arr << endl;


return 0;
}