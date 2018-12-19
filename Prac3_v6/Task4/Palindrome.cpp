#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int original, ammended, temp, reversed;

  cout << "Enter a nonzero positive number: ";
  cin >> original;

  // input validation while loop
  while (original <= 0)
  {
      cout << "You entered " << original << " which is an invalid number.";
      cout << "Please enter a nonzero positive number: ";
      cin >> original;
  }

  ammended = original;
  reversed = 0;

  while (ammended > 0)
  {
      temp = (ammended % 10);
      ammended = trunc(ammended/10);
      reversed = ((reversed*10) + temp);
  }

  cout << "The reverse of " << original << " is " << reversed << endl;

  if (reversed == original)
  {
      cout << "Yes! This is a palindrome.";
  }

  else if (reversed != original)
  {
      cout << "No. This is not a palindrome.";
  }

return 0;

}
