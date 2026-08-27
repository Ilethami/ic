#include <iostream>
using namespace std;

int main()
{
    int degrees;
    cout << "Input degrees: " << endl;
    cin >> degrees;
    if (degrees <= 90 && degrees >= 0)
    {
        if (degrees == 0)
        {
            cout << "The degree is on the positive X-axis" << endl;
        }
        else if (degrees == 90)
        {
            cout << "The degree is on the positive Y-axis" << endl;
        }
        else
        {
            cout << "The degree is on the 1st Quadrant" << endl;
        }
    }
    else if (degrees >= 91 && degrees <= 180)
    {

        if (degrees == 180)
        {
            cout << "The degree is on the negative X-axis" << endl;
        }
        else
        {
            cout << "The degree is on the 2nd Quadrant" << endl;
        }
    }
    else if (degrees >= 181 && degrees <= 270)
    {
        if (degrees == 270)
        {
            cout << "The degree is on the negative Y-axis" << endl;
        }
        else
        {
            cout << "The degree is on the 3rd Quadrant" << endl;
        }
    }
    else if (degrees >= 271 && degrees <= 360)
    {

        cout << "The degree is on the 4th Quadrant" << endl;
    }
    else
    {
        cout << "Input is not applicable to the conditions stated" << endl;
    }
}