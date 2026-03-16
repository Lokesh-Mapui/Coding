#include<bits/stdc++.h>
using namespace std;

void sortZeroAndOne(int arr[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(arr[i] == 0){
			int temp = arr[nextZero];
			arr[nextZero] = arr[i];
			arr[i] = temp;
            nextZero++;
		}
	}
}

int main()
{
    int arr[] = {0,0,1,0,1,1,1,1,0};
    int n=9;

    sortZeroAndOne(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}