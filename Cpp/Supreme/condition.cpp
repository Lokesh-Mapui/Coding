#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter the number:";
  cin >> num;
  if (num > 0)
  {
    cout << "number is positive" << endl;
  }
  else if (num < 0)
  {
    cout << "number is negative" << endl;
  }
  else
  {
    cout << "zero" << endl;
  }
  return 0;
}