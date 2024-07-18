#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cout << "enter the marks:";
    cin >> marks;

    if (marks >= 90 & marks <= 100)
    {
        cout << "outstanding" << endl;
    }
    else if (marks >= 80 & marks <= 90)
    {
        cout << "excellent" << endl;
    }
    else if (marks >= 70 & marks <= 80)
    {
        cout << "very good" << endl;
    }
    else if (marks >= 60 & marks <= 70)
    {
        cout << "good" << endl;
    }
    else if (marks >= 50 & marks <= 60)
    {
        cout << "average" << endl;
    }
    else if (marks >= 40 & marks <= 50)
    {
        cout << "below average" << endl;
    }
    else if (marks >= 35 & marks <= 40)
    {
        cout << "pass" << endl;
    }
    else if(marks>0 & marks<40)
    {
        cout << "fail" << endl;
    }
    else
    {
        cout<<"Please input correct marks."<<endl;
    }
    return 0;
}