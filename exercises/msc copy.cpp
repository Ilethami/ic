
// let the user prompt 10 angles, program must count how many times an angle appears in a specific quadrant and axis
#include <iostream>
using namespace std;

int main()
{
    int angles;
    cout << "Input angles: " << endl;
    cin >> angles;
    if (angles <= 90 && angles >= 0)
    {
        if (angles == 0)
        {
            cout << "The degree is on the positive X-axis" << endl;
        }
        else if (angles == 90)
        {
            cout << "The degree is on the positive Y-axis" << endl;
        }
        else
        {
            cout << "The degree is on the 1st Quadrant" << endl;
        }
    }
    else if (angles >= 91 && angles <= 180)
    {

        if (angles == 180)
        {
            cout << "The degree is on the negative X-axis" << endl;
        }
        else
        {
            cout << "The degree is on the 2nd Quadrant" << endl;
        }
    }
    else if (angles >= 181 && angles <= 270)
    {
        if (angles == 270)
        {
            cout << "The degree is on the negative Y-axis" << endl;
        }
        else
        {
            cout << "The degree is on the 3rd Quadrant" << endl;
        }
    }
    else if (angles >= 271 && angles <= 360)
    {

        cout << "The degree is on the 4th Quadrant" << endl;
    }
    else
    {
        cout << "Input is not applicable to the conditions stated" << endl;
    }
}