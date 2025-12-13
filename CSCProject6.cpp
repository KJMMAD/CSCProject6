#include <iostream>
using namespace std;
/*
* Func: getScore
* Purpose: Get and validate a score input
* Parameters: 
* - double score: score for the contestant, can be a number, fractions included, between 0 and 10
* Returns:
* - double score: score for the contestant that is between 0 and 10
* Preconditions:
* - None
* Postconditions:
* - Return validated score
*/
double getScore();

/*
* Func: isLower
* Purpose: Checks for the lowest score
* Parameters:
* - double compScore: score to compare to lowest score
* - double sLow: current lowest score
* Returns:
* - bool : based on whether or not score is lower than the current lowest score
* Preconditions:
* - None
* Postconditions:
* - Returns a bool value
*/
bool isLower(double, double);

/*
* Func: isHigher
* Purpose: Checks for the highest score
* Parameters:
* - double compScore: score to compare to highest score
* - double sHigh: current highest score
* Returns:
* - bool : based on whether or not score is higher than the current highest score
* Preconditions:
* - None
* Postconditions:
* - Returns a bool value
*/
bool isHigher(double, double);

/*
* Func: calcAverage
* Purpose: Calculates the average score using the 3 numbers that are not the highest or lowest score
* Parameters:
* - double sT: Total of all the scores
* - double sH: Highest score
* - double sL: Lowest score
* Returns:
* - double: (sTotal - sH - sL)%3
* Preconditions:
* - None
* Postconditions:
* - Returns a double value
*/
double calcAverage(double&, double, double);

const int sMin = 0, sMax = 10;
int main()
{
    double score, avg, sLow, sHigh, sTotal = 0;
    int judges = 5, j = 1;
    cout << "The judges are now writing their scores." << endl;

    score = getScore();
    sLow = score;
    sHigh = score;

    do {
        sTotal += score;
        if (isLower(score, sLow)) {
            sLow = score;
        }
        if (isHigher(score, sHigh)) {
            sHigh = score;
        }
        score = getScore();
        j++;
    } while(j < judges);
    cout << sTotal << endl;
    avg = calcAverage(sTotal, sLow, sHigh);
    cout << "The final score is " << avg << endl;

}

double getScore() {
    double score;
    do {
        cout << "What was the contestants score? Must be between 0 and 10." << endl;
        cin >> score;
        cin.clear();
        cin.ignore();
        if (score < sMin || score > sMax)
            cout << "Invalid score, please select a number or fraction between 0 and 10" << endl;
    } while (score < sMin || score > sMax);
    cout << "Score validated!" << endl;
    return score;
}

bool isLower(double sCompL, double sLow) {
    return(sCompL <= sLow);
}

bool isHigher(double sCompH, double sHigh) {
    return(sCompH >= sHigh);
}

double calcAverage(double &sTotal, double sHigh,double sLow){
    cout << sHigh <<" "<< sLow << " " << sTotal << endl;

    double newTotal = sTotal - sHigh - sLow;
    cout << newTotal << "total" << endl;
    const double aThird = 0.333;
    double average = sTotal * aThird;
    return average;
}