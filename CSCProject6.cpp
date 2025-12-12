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
    string lowestReg;
    string regName[5]; //Array only has room for 5 possible names given the city has 5 regions - North, East, South, West, and Central 

    int lowestAcc;
    int accNum[5]; //Array has room for 5 possible numbers to match to the corresponding region


    cout << "To start finding the safest driving region we need you to provide the number of accidents that happened in each region this past year." << endl;
    cout << "The names of the city's regions are, North, East, South, West, and Central.\n";
    for (int i = 0; i < 5; i++) {
        bool isLowest;

        getRegInfo(regName[i], accNum[i]);
        lowestReg = regName[0];
        lowestAcc = accNum[0];
        cout << regName[i] << " " << accNum[i] << endl; //Making sure calling getRegInfo works correctly
        isLowest = isLower(accNum[i],lowestAcc);
        if (isLowest == true) {
            lowestReg = regName[i];
            lowestAcc = accNum[i];
        }
    }
    showLowest(lowestReg, lowestAcc);
    /*islowest = isLower(1, 2); //Concept for what the check for the region with the lowest accidents should look like
    if (islowest == true) {
        lowestReg = "";
        lowestAcc = 1;
    }
    showLowest(lowestReg, lowestAcc); //With test data, should include "Central" and "10"
    return 0;
    */
    return 0;
}

int getRegInfo(string &regName, int &accNum) {
    cout << "What is the name of the region?" << endl;
    cin >> regName;
    while (accNum <= 0) {
        cout << "How many accidents have happened in the region in the past year?" << endl;
        cin >> accNum;
        cin.clear();
        cin.ignore();
        if (accNum <= 0) {
            cout << "Invalid input, please try again." << endl;
        }
    }
    cout << "Input validated." << endl;
    return regName, accNum;
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
    cout << "The safest region to drive in is " << name << " with " << accNum << " accidents this past year." << endl;
}