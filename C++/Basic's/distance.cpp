#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int speed=20;
    // int time=2;
    // int distance;
    // distance=speed/time;
    // cout<<distance<<endl;
    // Heelo

    int n;
    cout << "enter the number:";
    cin >> n;
    for (int i = 0; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "the number is prime" << endl;
        }
        else
        {
            cout << "the number is not prime" << endl;
        }
    }
    return 0;
}

// helo