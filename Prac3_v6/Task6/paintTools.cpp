#include "paintTools.h"
#include <cmath>

/* Calculate the area of an item if length and breadth 
of the item is given. */
double getItemArea(double length, double breadth)
{

	return (length * breadth);
}




/* Calculate the total area of a number of similar sized items. */
double getTotalArea(int number, double area)
{
	return (number * area);
}



/* Calculate the actual area if the total area and the
area that should not be painted (gaps) is given. */
double getActualArea(double total, double gaps)
{
	return (total - gaps);
}



/* Calculate the area of the inside walls of a room 
assuming there is no windows or doors.  */
double  getRoomArea(double width, double length, double height)
{
	return ( 2 * (width * height) + 2 * (length * height) );
}



/* Calculate the number of tins of paint that will be used
for a given area. You need a full tin for any fraction needed. */
int  getTins(double area)
{
	return ( ceil(area/SQM_PER_TIN) );
}



/* Calculate the number hours that will be needed, given an area. */
double  getHours(double area)
{
	return ( (area / SQM_PER_DAY) * 8);
}