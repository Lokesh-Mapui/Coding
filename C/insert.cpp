#include <stdio.h>

void insert (int arr[],int n,int element,int index){
    for(int i=n;i>index;i++){
        arr[i]=arr[i-1];
    }
    arr[index]=element;
}



int main() {
    int arr[6] = {1, 2, 3, 4, 5};
    int n = 5;
    int element = 99;
    int index = 2;
    
    insert(arr, n, element, index);
    
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
}