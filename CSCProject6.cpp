#include <iostream>
using namespace std;

/*
* Func : getLength_Width
* Purpose : Asks user for two integers, validates those input (they both must be greater than 0), then returns the inputs to finish the validation.
* Paremeters :
* - int &l : the length
* - int &w : the width
* Returns : 
* - int l : the length 
* - int w : the width
* Preconditions :
* - None
* Postconditions : 
* - Returns the validated lenght(l) and width(w)
*/
int getLength_Width(int &l, int &w);

/*
* Func : calcPerimeter
* Purpose : Calculates the perimeter using the l and w integers and returns the calculation
* Parameters : 
* - int l: the length of the rectangle
* - int w: the width of the rectangle
* Returns : 
* - int : sum of w times 2 and l times 2
* Preconditions :
* - None
* Postconditions :
* - Returns the sum of parameter l times 2 and parameter w times 2
*/
int calcPerimeter(int, int);

/*
* Func : calcArea
* Purpose : Calculates the area using the l and w integers and returns the calculation
* Parameters :
* - int l : length of the rectangle
* - int w : width of the rectangle
* Returns :
* - int : the product of l and w
* Preconditions :
* - None
* Postconditions :
* - Return the product of l and w
*/
int calcArea(int, int);

/*
* Func : displayProperties
* Purpose : Prints the perimter and area of the rectangle from the given lenght and width inputs
* Parameters :
* - int perimeter : sum of l times 2 and w times 2
* - int area : product of l times w
* Returns :
* - None
* Preconditions :
* - None
* Postconditions :
* - Write the values of the perimeter and area to the display
*/
void displayProperties(int, int);

int main()
{
	int prompt;
	cout << "Please press 1 to start, press any other number to exit." << endl;
	cin >> prompt;
	while (prompt == 1) {
		int l = 0, w = 0;
		getLength_Width(l,w);
		int perimeter = calcPerimeter(l, w);
		int area = calcArea(l, w);
		displayProperties(area, perimeter);
		cout << "Press 1 to make another rectangle, press any other number to exit" << endl;
		cin >> prompt;
	}
	cout << "Closing program.";
}

int getLength_Width(int &l,int &w){
	while (l < 1 || w < 1) {
		cout << "Please enter the lenght of your rectanlge.\n";
		cin >> l;
		cout << "Please enter the width of your rectangle.\n";
		cin >> w;
		if (l < 1 || w < 1) {
			cout << "Invalid input(s), try again!\n";
		}
	}
	cout << "Input validated!\n";
	return l, w;
}

int calcPerimeter(int l, int w) {
	return 2 * l + 2 * w;
}

int calcArea (int l, int w) {
	return l * w;
}

void displayProperties(int area, int perimeter) {
	cout << "The perimeter of the rectangle is " << perimeter << ", and it's area is " << area << endl;
}
