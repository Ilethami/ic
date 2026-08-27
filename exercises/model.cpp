#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int wClass, weight, modelYear;
    float fee;
    string model;

    cout << "Car Model " << endl;
    getline(cin, model);

    cout << "Car Model Year " << endl;
    cin >> modelYear;

    cout << "Car Weight " << endl;
    cin >> weight;

    if (modelYear <= 1970)
    {
        if (weight < 2700)
        {
            wClass = 1;
            fee = 16.50;
        }
        else if (weight <= 3800)
        {
            wClass = 2;
            fee = 26.50;
        }
        else
        {
            wClass = 3;
            fee = 46.50;
        }
    }
    else if (modelYear < 1980)
    {
        if (weight < 2700)
        {
            wClass = 4;
            fee = 27.00;
        }
        else if (weight <= 3800)
        {
            wClass = 5;
            fee = 30.50;
        }
        else
        {
            wClass = 6;
            fee = 52.50;
        }
    }
    else
    {
        if (weight < 3500)
        {
            wClass = 7;
            fee = 35.50;
        }
        else
        {
            wClass = 8;
            fee = 65.50;
        }
    }

    cout << fixed << setprecision(2);

    cout << "Car Model: " << model << endl;
    cout << "Car Model Year: " << modelYear << endl;
    cout << "Car Weight: " << weight << endl;
    cout << "Car Weight Class: " << wClass << endl;
    cout << "Registration Fee: " << fee << endl;

    return 0;
}