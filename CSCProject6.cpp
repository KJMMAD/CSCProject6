#include <iostream>
using namespace std;

/*
* Func: getRoom
* Purpose: Asks for the number of rooms to be painted, must be greater than 1
* Parameters:
* - None
* Return:
* - int: number of rooms
* Preconditions:
* - None
* Postconditions:
* - Return an integer greater than 1
*/
int getRooms();

/*
* Func: getSqFt
* Purpose: Aks for and receives input for the square feet of a room
* Parameters:
* - None
* Return:
* - int: square feet for the room that must be greater than 0
* Preconditions:
* - None
* Postconditions:
* - Return an int value
*/
int	getSqrFt();

/*
* Func: galForRoom
* Purpose: Calculates the gallons of paint needed for a room
* Parameters:
* - int sqrFt: square feet of the room, must be > 10
* Return:
* - int: Gallons needed for room based on 110 sqrFt / 1 gallon of paint
* Preconditions:
* Postconditions:
*/
double galForRoom(int);

/*
* Func:getPricePerGal
* Purpose: Calculate the price of paint per gallon
* Parameters:
* -double gal: gallons need to paint the room
* Return:
* -double pricePerGal: price of paint per gallon
* Preconditions:
* - None
* Postconditions:
* -Return a double value indicating the price of paint per gallon
*/
double getPricePerGal(double);

/*
* Func:
* Purpose: Display the estimated cost of the paint job for all of the rooms.
* Parameters:
* - double paintCharge: price of paint per gallon
* - double galNeeded: total of gallons needed to paint all of the rooms
* - double laborCharge: charge of labor based on the product of labor required and length of labor
* - double laborHrs: hours of labor
* Return:
* - None
* Preconditions:
* - None
* Postconditions:
* - Display the estimated cost for the paint job
*/
void displayEst(double, double, double, double);

int main()
{
	int paintCharge = 0, laborCharge = 0, galNeeded = 0, laborHrs = 0;
	
	int numRooms = getRooms();
	for (int i = 0; i < numRooms; i++) {
		int sqrFt = getSqrFt();
		double gal = galForRoom(sqrFt);
		cout << gal << endl;
	}
}

int getRooms() {
	int rooms = 0;
	do {
		cout << "Please enter the number of rooms you want to be painted." << endl;
		cin >> rooms;
		if (rooms < 1)
			cout << "We only make estimates for 2 or more rooms, please use a number greater than 1." << endl;
	} while (rooms <= 1);
	return rooms;
}

int getSqrFt() {
	int squareFoot = 0;
	do {
		cout << "What is the square footage of this room?" << endl;
		cin >> squareFoot;
		if (squareFoot <= 69)
			cout << "Square foot must be greater than 0." << endl;
	} while (squareFoot <= 69); //increased minimum squarefoot to at least 70 as that is a more reasonable size for even a small room
	return squareFoot;
}

double galForRoom(int squareFoot) {
	const double galPerSqrft = 0.0091; // 1/110 rounded to the fourth place from the decimal
	cout << galPerSqrft << endl;
	double galNeeded = squareFoot * galPerSqrft;
	cout << galNeeded << endl;
	return galNeeded;
}