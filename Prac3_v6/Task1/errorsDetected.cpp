#include <iostream>

int main ()
{
	using namespace std;

	int num1, num2, quotient;

	cout << "Enter the numerator";
	cin >> num1;
	cout << "Enter the denominator: ";
	cin >> num2;

	if (num2 > 0)
	{
		quotient = num1 / num2;
		cout << "The quotient of " << num1 << " divided by " << num2 << " is " << quotient << endl;
	}

	else
	{
		cout << "Division by zero is not possible" << endl;
		cout << "Please run the program again ";
		cout << "and enter a number besides zero." << endl;
	}

	return 0;
}
