#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

	string dash = "------------------------------------------------------";
	string name; //Name of inputfile
	ifstream InputFile; //input file
	int Qnum = 1; 
	double size;
	string country;

	//for the smallest country
	long int small_size , smallest_size;
	string smallest_country;

	cout << "Give the file name: ";
	cin >> name; //name of inputfile

	InputFile.open(name.c_str()); // opening the actual file

	cout << dash << endl;


	//Test for File open errors
	if (!InputFile)
	{
		cout << name << " Failed to open file" << endl;

	}


	else
	{
		

		small_size = 99998545; // initliasing a huge number that all will be smaller

		//output and determining smallest country
		while (InputFile >> country >> size)
		{
		
			cout << right << setw(3) << Qnum << "  ";

			cout << left << setw(30) << country;			

			cout << fixed << setprecision(0) << right << setw(10) << size << endl;

			if (size < small_size)
			{
				small_size = size;
				smallest_country = country;
			}//end of if

			Qnum++;
			
		}//end of while loop

		InputFile.close(); // close the file

		cout << dash << endl;	
		cout << "The smallest country on the list is " << smallest_country << endl;

	}// end of else 

return 0;
}//end of main

//end of program