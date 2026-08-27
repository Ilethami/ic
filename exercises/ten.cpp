
#include <iostream>

using namespace std;

int main()
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
    int px = 0, nx = 0, ny = 0, py = 0;
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;

    cout << "Input 10 angles:" << endl;

    cout << "Angle 1: ";
    cin >> d1;

    cout << "Angle 2: ";
    cin >> d2;

    cout << "Angle 3: ";
    cin >> d3;

    cout << "Angle 4: ";
    cin >> d4;

    cout << "Angle 5: ";
    cin >> d5;

    cout << "Angle 6: ";
    cin >> d6;

    cout << "Angle 7: ";
    cin >> d7;

    cout << "Angle 8: ";
    cin >> d8;

    cout << "Angle 9: ";
    cin >> d9;

    cout << "Angle 10: ";
    cin >> d10;

    // Angle 1
    if (d1 == 0 || d1 == 360)
    {
        cout << d1 << "° is on the positive X-axis" << endl;
        px++;
    }
    else if (d1 == 90)
    {
        cout << d1 << "° is on the positive Y-axis" << endl;
        py++;
    }
    else if (d1 == 180)
    {
        cout << d1 << "° is on the negative X-axis" << endl;
        nx++;
    }
    else if (d1 == 270)
    {
        cout << d1 << "° is on the negative Y-axis" << endl;
        ny++;
    }
    else if (d1 > 0 && d1 < 90)
    {
        cout << d1 << "° is on the 1st Quadrant" << endl;
        q1++;
    }
    else if (d1 > 90 && d1 < 180)
    {
        cout << d1 << "° is on the 2nd Quadrant" << endl;
        q2++;
    }
    else if (d1 > 180 && d1 < 270)
    {
        cout << d1 << "° is on the 3rd Quadrant" << endl;
        q3++;
    }
    else if (d1 > 270 && d1 < 360)
    {
        cout << d1 << "° is on the 4th Quadrant" << endl;
        q4++;
    }
    else
    {
        cout << d1 << "° is not applicable" << endl;
    }

    // Angle 2
    if (d2 == 0 || d2 == 360)
    {
        cout << d2 << "° is on the positive X-axis" << endl;
        px++;
    }
    else if (d2 == 90)
    {
        cout << d2 << "° is on the positive Y-axis" << endl;
        py++;
    }
    else if (d2 == 180)
    {
        cout << d2 << "° is on the negative X-axis" << endl;
        nx++;
    }
    else if (d2 == 270)
    {
        cout << d2 << "° is on the negative Y-axis" << endl;
        ny++;
    }
    else if (d2 > 0 && d2 < 90)
    {
        cout << d2 << "° is on the 1st Quadrant" << endl;
        q1++;
    }
    else if (d2 > 90 && d2 < 180)
    {
        cout << d2 << "° is on the 2nd Quadrant" << endl;
        q2++;
    }
    else if (d2 > 180 && d2 < 270)
    {
        cout << d2 << "° is on the 3rd Quadrant" << endl;
        q3++;
    }
    else if (d2 > 270 && d2 < 360)
    {
        cout << d2 << "° is on the 4th Quadrant" << endl;
        q4++;
    }
    else
    {
        cout << d2 << "° is not applicable" << endl;
    }

    // Angle 3
    if (d3 == 0 || d3 == 360)
    {
        cout << d3 << "° is on the positive X-axis" << endl;
        px++;
    }
    else if (d3 == 90)
    {
        cout << d3 << "° is on the positive Y-axis" << endl;
        py++;
    }
    else if (d3 == 180)
    {
        cout << d3 << "° is on the negative X-axis" << endl;
        nx++;
    }
    else if (d3 == 270)
    {
        cout << d3 << "° is on the negative Y-axis" << endl;
        ny++;
    }
    else if (d3 > 0 && d3 < 90)
    {
        cout << d3 << "° is on the 1st Quadrant" << endl;
        q1++;
    }
    else if (d3 > 90 && d3 < 180)
    {
        cout << d3 << "° is on the 2nd Quadrant" << endl;
        q2++;
    }
    else if (d3 > 180 && d3 < 270)
    {
        cout << d3 << "° is on the 3rd Quadrant" << endl;
        q3++;
    }
    else if (d3 > 270 && d3 < 360)
    {
        cout << d3 << "° is on the 4th Quadrant" << endl;
        q4++;
    }
    else
    {
        cout << d3 << "° is not applicable" << endl;
    }

    // Angle 4
    if (d4 == 0 || d4 == 360)
    {
        cout << d4 << "° is on the positive X-axis" << endl;
        px++;
    }
    else if (d4 == 90)
    {
        cout << d4 << "° is on the positive Y-axis" << endl;
        py++;
    }
    else if (d4 == 180)
    {
        cout << d4 << "° is on the negative X-axis" << endl;
        nx++;
    }
    else if (d4 == 270)
    {
        cout << d4 << "° is on the negative Y-axis" << endl;
        ny++;
    }
    else if (d4 > 0 && d4 < 90)
    {
        cout << d4 << "° is on the 1st Quadrant" << endl;
        q1++;
    }
    else if (d4 > 90 && d4 < 180)
    {
        cout << d4 << "° is on the 2nd Quadrant" << endl;
        q2++;
    }
    else if (d4 > 180 && d4 < 270)
    {
        cout << d4 << "° is on the 3rd Quadrant" << endl;
        q3++;
    }
    else if (d4 > 270 && d4 < 360)
    {
        cout << d4 << "° is on the 4th Quadrant" << endl;
        q4++;
    }
    else
    {
        cout << d4 << "° is not applicable" << endl;
    }

    // Angle 5
    if (d5 == 0 || d5 == 360)
    {
        cout << d5 << "° is on the positive X-axis" << endl;
        px++;
    }
    else if (d5 == 90)
    {
        cout << d5 << "° is on the positive Y-axis" << endl;
        py++;
    }
    else if (d5 == 180)
    {
        cout << d5 << "° is on the negative X-axis" << endl;
        nx++;
    }
    else if (d5 == 270)
    {
        cout << d5 << "° is on the negative Y-axis" << endl;
        ny++;
    }
    else if (d5 > 0 && d5 < 90)
    {
        cout << d5 << "° is on the 1st Quadrant" << endl;
        q1++;
    }
    else if (d5 > 90 && d5 < 180)
    {
        cout << d5 << "° is on the 2nd Quadrant" << endl;
        q2++;
    }
    else if (d5 > 180 && d5 < 270)
    {
        cout << d5 << "° is on the 3rd Quadrant" << endl;
        q3++;
    }
    else if (d5 > 270 && d5 < 360)
    {
        cout << d5 << "° is on the 4th Quadrant" << endl;
        q4++;
    }
    else
    {
        cout << d5 << "° is not applicable" << endl;
    }

    // Angle 6
    if (d6 == 0 || d6 == 360)
    {
        cout << d6 << "° is on the positive X-axis" << endl;
        px++;
    }
    else if (d6 == 90)
    {
        cout << d6 << "° is on the positive Y-axis" << endl;
        py++;
    }
    else if (d6 == 180)
    {
        cout << d6 << "° is on the negative X-axis" << endl;
        nx++;
    }
    else if (d6 == 270)
    {
        cout << d6 << "° is on the negative Y-axis" << endl;
        ny++;
    }
    else if (d6 > 0 && d6 < 90)
    {
        cout << d6 << "° is on the 1st Quadrant" << endl;
        q1++;
    }
    else if (d6 > 90 && d6 < 180)
    {
        cout << d6 << "° is on the 2nd Quadrant" << endl;
        q2++;
    }
    else if (d6 > 180 && d6 < 270)
    {
        cout << d6 << "° is on the 3rd Quadrant" << endl;
        q3++;
    }
    else if (d6 > 270 && d6 < 360)
    {
        cout << d6 << "° is on the 4th Quadrant" << endl;
        q4++;
    }
    else
    {
        cout << d6 << "° is not applicable" << endl;
    }

    // Angle 7
    if (d7 == 0 || d7 == 360)
    {
        cout << d7 << "° is on the positive X-axis" << endl;
        px++;
    }
    else if (d7 == 90)
    {
        cout << d7 << "° is on the positive Y-axis" << endl;
        py++;
    }
    else if (d7 == 180)
    {
        cout << d7 << "° is on the negative X-axis" << endl;
        nx++;
    }
    else if (d7 == 270)
    {
        cout << d7 << "° is on the negative Y-axis" << endl;
        ny++;
    }
    else if (d7 > 0 && d7 < 90)
    {
        cout << d7 << "° is on the 1st Quadrant" << endl;
        q1++;
    }
    else if (d7 > 90 && d7 < 180)
    {
        cout << d7 << "° is on the 2nd Quadrant" << endl;
        q2++;
    }
    else if (d7 > 180 && d7 < 270)
    {
        cout << d7 << "° is on the 3rd Quadrant" << endl;
        q3++;
    }
    else if (d7 > 270 && d7 < 360)
    {
        cout << d7 << "° is on the 4th Quadrant" << endl;
        q4++;
    }
    else
    {
        cout << d7 << "° is not applicable" << endl;
    }

    // Angle 8
    if (d8 == 0 || d8 == 360)
    {
        cout << d8 << "° is on the positive X-axis" << endl;
        px++;
    }
    else if (d8 == 90)
    {
        cout << d8 << "° is on the positive Y-axis" << endl;
        py++;
    }
    else if (d8 == 180)
    {
        cout << d8 << "° is on the negative X-axis" << endl;
        nx++;
    }
    else if (d8 == 270)
    {
        cout << d8 << "° is on the negative Y-axis" << endl;
        ny++;
    }
    else if (d8 > 0 && d8 < 90)
    {
        cout << d8 << "° is on the 1st Quadrant" << endl;
        q1++;
    }
    else if (d8 > 90 && d8 < 180)
    {
        cout << d8 << "° is on the 2nd Quadrant" << endl;
        q2++;
    }
    else if (d8 > 180 && d8 < 270)
    {
        cout << d8 << "° is on the 3rd Quadrant" << endl;
        q3++;
    }
    else if (d8 > 270 && d8 < 360)
    {
        cout << d8 << "° is on the 4th Quadrant" << endl;
        q4++;
    }
    else
    {
        cout << d8 << "° is not applicable" << endl;
    }

    // Angle 9
    if (d9 == 0 || d9 == 360)
    {
        cout << d9 << "° is on the positive X-axis" << endl;
        px++;
    }
    else if (d9 == 90)
    {
        cout << d9 << "° is on the positive Y-axis" << endl;
        py++;
    }
    else if (d9 == 180)
    {
        cout << d9 << "° is on the negative X-axis" << endl;
        nx++;
    }
    else if (d9 == 270)
    {
        cout << d9 << "° is on the negative Y-axis" << endl;
        ny++;
    }
    else if (d9 > 0 && d9 < 90)
    {
        cout << d9 << "° is on the 1st Quadrant" << endl;
        q1++;
    }
    else if (d9 > 90 && d9 < 180)
    {
        cout << d9 << "° is on the 2nd Quadrant" << endl;
        q2++;
    }
    else if (d9 > 180 && d9 < 270)
    {
        cout << d9 << "° is on the 3rd Quadrant" << endl;
        q3++;
    }
    else if (d9 > 270 && d9 < 360)
    {
        cout << d9 << "° is on the 4th Quadrant" << endl;
        q4++;
    }
    else
    {
        cout << d9 << "° is not applicable" << endl;
    }

    // Angle 10
    if (d10 == 0 || d10 == 360)
    {
        cout << d10 << "° is on the positive X-axis" << endl;
        px++;
    }
    else if (d10 == 90)
    {
        cout << d10 << "° is on the positive Y-axis" << endl;
        py++;
    }
    else if (d10 == 180)
    {
        cout << d10 << "° is on the negative X-axis" << endl;
        nx++;
    }
    else if (d10 == 270)
    {
        cout << d10 << "° is on the negative Y-axis" << endl;
        ny++;
    }
    else if (d10 > 0 && d10 < 90)
    {
        cout << d10 << "° is on the 1st Quadrant" << endl;
        q1++;
    }
    else if (d10 > 90 && d10 < 180)
    {
        cout << d10 << "° is on the 2nd Quadrant" << endl;
        q2++;
    }
    else if (d10 > 180 && d10 < 270)
    {
        cout << d10 << "° is on the 3rd Quadrant" << endl;
        q3++;
    }
    else if (d10 > 270 && d10 < 360)
    {
        cout << d10 << "° is on the 4th Quadrant" << endl;
        q4++;
    }
    else
    {
        cout << d10 << "° is not applicable" << endl;
    }

    cout << endl;
    cout << "Summary:" << endl;
    cout << "Positive X-axis: " << px << endl;
    cout << "Negative X-axis: " << nx << endl;
    cout << "Positive Y-axis: " << py << endl;
    cout << "Negative Y-axis: " << ny << endl;
    cout << "1st Quadrant: " << q1 << endl;
    cout << "2nd Quadrant: " << q2 << endl;
    cout << "3rd Quadrant: " << q3 << endl;
    cout << "4th Quadrant: " << q4 << endl;

    return 0;
}