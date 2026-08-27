#include <iostream>
using namespace std;

int main()
{
    int wSpeed;
    cout << "Input wind speed: " << endl;
    cin >> wSpeed;
    if (wSpeed >= 39)
    {
        cout << "Strong Breeze" << endl;
    }
    else if (wSpeed >= 38)
    {
        cout << "Fresh Breeze" << endl;
    }
    else if (wSpeed >= 29)
    {
        cout << "Moderate Breeze" << endl;
    }
    else if (wSpeed >= 19)
    {
        cout << "Gentle Breeze" << endl;
    }
    else if (wSpeed >= 11)
    {
        cout << "Light Breeze" << endl;
    }
    else if (wSpeed < 6)
    {
        cout << "Calm" << endl;
    }
    else
    {
        cout << "Input is not applicable to the conditions stated" << endl;
    }
}