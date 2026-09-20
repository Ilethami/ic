#include <iostream> // iostream(cin,cout etc.)
#include <iomanip>  //iomanip(setprecision) iomanip(fixed decimals etc.)
#include <vector>   //arrays

using namespace std;
// Values
const float
    MAX = 5;
int x = 0;

float tempval,
    total = 0,
    average = 0;

// separate method
int calcTemp()
{
    cout << "Enter Machine Temperature: ";
    cin >> tempval;
    while (x <= MAX)
    {
        total += tempval;
        average = total / MAX;
        x++;
    }
    return total, average;
}
// Main method
int main()
{
    calcTemp();
    cout << "The total temperature is: " << total << endl;
    cout << "The average temperature is: " << average << endl;
}
