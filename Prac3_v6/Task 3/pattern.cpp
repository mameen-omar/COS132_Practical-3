  #include <iostream>
#include <string>
using namespace std;

int main()
{
  int size;
  string dash = "------------------------------------------------------------------------------";

  cout << "Enter the size: ";
  cin >> size;


  cout << dash << endl;
  cout << "Pattern A\n";
  cout << dash << endl;
  int countA = 1;
  int subcountA = 1;

  for ( ; countA <= size ; ++countA)
  {
      for (; subcountA <= countA; ++subcountA)
      {
        cout << "+";
      }
    subcountA = 1;
    cout << endl;
  }

  cout << dash << endl;
  cout << "Pattern B\n";
  cout << dash << endl;
  // I NEED THE SIZE EQUAL T FIRST COUNT
  for (int countB = size; countB > 0 ; --countB)
  {
      for (int subcountB = countB ; subcountB > 0 ; --subcountB)
      {
        cout << "+";
      }
    cout << endl ;
  }
  cout << dash << endl;


  return 0;
}
