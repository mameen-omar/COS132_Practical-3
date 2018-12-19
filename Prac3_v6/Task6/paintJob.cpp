#include "paintTools.h"
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int rooms, roomNum, doors, windows, tins ;
	double height, breadth, length, area, actualArea, removeArea, totalArea, hours, labourCharge, tinPrice, totalPrice;
	
	string greeting = "Welcome to the paint job calculator.";
	string stars = "*****************************************";
	string dash = "----------------------------------------------------";

	cout << greeting << endl;
	cout << stars << endl;

	cout << "Enter the number of rooms to be painted: "; //number of rooms
	cin >> rooms;

	cout << "Enter the height of the walls to be painted: "; //height of walls
	cin >> height;
	

	for (roomNum = 1; roomNum <= rooms; roomNum++)
	{
		cout << dash << endl;
		cout << "Room " << roomNum <<":\n";
		cout << "Enter the length: ";
		cin >> length;

		cout << "Enter the breadth: ";
		cin >> breadth;

		cout << "Enter the number of doors: ";
		cin >> doors;

		cout << "Enter the number of windows: ";
		cin >> windows;

		area = getRoomArea(length, breadth, height); //Area of current room

		removeArea = ((windows * WINDOW_AREA) + (doors * DOOR_AREA)); // area to be removed

		actualArea = getActualArea(area,removeArea); // actual area to be painted

		totalArea = totalArea + actualArea;// total area to be painted for all rooms

	}

	cout << stars << endl;

	//Calculations 
	tins = getTins(totalArea);
	hours = getHours(totalArea);
	labourCharge = (hours * LABOUR_PER_HOUR);
	tinPrice = (tins * PRICE_PER_TIN);
	totalPrice = (labourCharge + tinPrice);

	cout << fixed << setprecision(2);
	cout << "The area to be painted is " << totalArea << " square meters\n";
	cout << "The number of tins of paint required is " << tins << " tin(s)\n";
	cout << "The hours of labour required is " << hours << " hours\n";
	cout << "The labour charge is R" << labourCharge << endl;
	cout << "The total paint job cost is R" << totalPrice << endl;

	return 0;

}