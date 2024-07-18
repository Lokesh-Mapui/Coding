#include <iostream>
using namespace std;
int findoddoccuranceelement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }

        if (mid - 1 >= 0 && arr[mid] != arr[mid - 1] && mid + 1 >= 0 && arr[mid] != arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
        {
            int pairstartingindex = mid;
            if (pairstartingindex & 1)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            if (mid - 1 >= 0 && arr[mid] == arr[mid + 1])
            {
                int pairstartingindex = mid;
                if (pairstartingindex & 1)
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
}

    int main()
    {

        int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 3, 3};
        int n = 11;
        int ans = findoddoccuranceelement(arr, n);
        cout << "ans index :" << ans << endl;
        cout << "ans element :" << arr[ans] << endl;
        return 0;
    }

    // Update