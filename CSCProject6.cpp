#include <iostream>
#include <iomanip>
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
double getCelsius(int);

const int fMin = 0, fMax = 20;

int main()
{
    double c;
    cout << "Table: Fahreinheit to Celsius" << endl;
    cout << "Fahreinheit    Celsius" << endl;
    for (int f = fMin; f <= fMax; f++) {
        c = getCelsius(f);
        cout << setw(5) << f << setw(25) << fixed << setprecision(1) << c << endl;
    }
    return 0;
}

double getCelsius(int f) {
    double c;
    const double fract = 0.556;
    c = fract * (f - 32);
    return c;
}
