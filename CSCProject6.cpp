#include <iostream>
using namespace std;

/*
* Func: getCelsius
* Purpose: Takes Fahreinheit and converts it to Celsisus with the formula C = 5/9(F-32)
* Parameters:
* - int f: given Fahreinheit, should not be changed
* - int &c: returned Celsius after the formula 5/9(F-32) is calculated
* Returns:
* - int : Celsius using the given Fahreinheit
* Preconditions:
* - None
* Postconditions:
* - Return the value of c from the given formula C = 5/9(F-32)
*/
int getCelsius(int, double&);

int fMin = 0, fMax = 20;

int main()
{
    cout << "Table";
    for (int i = fMin; i < 20; i++) {

    }

}

int getCelsius(int f, double &c) {
    c = 5 / 9 * (f - 32);

    return c;
}
