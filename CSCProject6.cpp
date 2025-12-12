#include <iostream>
using namespace std;

/*
* Func : getRegInfo
* Purpose : Gets the name of a region and the number of accidents that occured in the region in the past year.
* Parameters :
* - string name: region name
* - int accidents : number of accidents for the region
* Returns :
* - string : name of region
* - int : number of accidents in the region
* Preconditions :
* - None
* Postconditions :
* - Return two values, string and int
*/
int getRegInfo(string&, int&);

/*
* Func : isLower
* Purpose : Compares the number of accidents from region 1 with region 2, if region 2 is lower then region 2 replaces region 1 as the lowest
* Parameters :
* - int accidents1: number of accidents for region 1
* - int accidents2 : number of accidents for region 2
* Returns :
* - bool : if region1 > region2 is true
* Preconditions :
* - None
* Postconditions :
* - Return a bool value
*/
bool isLower(int, int);

/*
* Func : showLowest
* Purpose : Shows the name of the region with the lowest number of accidents and the number of accidents it has
* Parameters :
* - string name: region name
* - int accidents : number of accidents for the region
* Returns :
* - None
* Preconditions :
* - None
* Postconditions :
* - Writes the name and number of accidents for the lowest region.
*/
void showLowest(string, int);

int main()
{

}

int getRegInfo(string &name, int &accNum) {
    cout << "Which region would you like to update?" << endl;
    cout << "How many accidents have happened in the region in the past year?" << endl;

}

bool isLower(int region1, int region2) {
    if (region1 <= region2) {
        return true;
    }
    else {
        return false;
    }
}

void showLowest(string name, int accNum) {
    cout << "The safest region to drive in is " << name << "with " << accNum << " accidents." << endl;
}