#include <bits/stdc++.h>
using namespace std;

int applybinarysearch(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;

        // Check if the target is present at mid or its neighbors
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid - 1] == target) {
            return mid - 1;
        }
        if (arr[mid + 1] == target) {
            return mid + 1;
        }

        // Adjust the search range
        if (arr[mid] < target) {
            s = mid + 2;
        } else {
            e = mid - 2;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 20;
    int ans = applybinarysearch(arr, n, target);
    cout<<"found at index no :"<<ans<<endl;
    return 0;
}
