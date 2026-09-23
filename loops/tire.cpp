#include <iostream>

using namespace std;

// Variables
bool front, rear, lt, rt;

int prompt = 7;
int frontLTire, frontRTire, rearLTire, rearRTire;

int main()
{
    for (int i = 1; i <= prompt; i++)
    {
        while (i <= prompt)
        {
            if (i == 1)
            {
                cout << "Front Tires Pressures\n------------------------\n";
                cout << "Left Tire Pressure:\n";
                cin >> frontLTire;
                cout << "Right Tire Pressure:\n";
                cin >> frontRTire;
                cout << "------------------------\n";
            }
            else if (i == 2)
            {
                cout << "Rear Tires Pressures\n------------------------\n";
                cout << "Left Tire Pressure:\n";
                cin >> rearLTire;
                cout << "Right Tire Pressure:\n";
                cin >> rearRTire;
                cout << "------------------------\n";
            }
            else if (i == 3)
            {
                if (rearLTire == rearRTire)
                {
                    cout << "All rear tires are of equal tire air pressure\n";
                    rear = true;
                }
                else if (frontLTire != frontRTire)
                {
                    cout << "All rear tires are of not equal tire air pressure\n";
                    rear = false;
                }
            }
            else if (i == 4)
            {
                if (frontLTire == frontRTire)
                {
                    cout << "All front tires are of equal tire air pressure\n";
                    front = true;
                }
                else if (frontLTire != frontRTire)
                {
                    cout << "All front tires are not of equal tire air pressure\n";
                    front = false;
                }
            }
            else if (i == 5)
            {
                if (frontLTire == rearLTire)
                {
                    lt = true;
                    cout << "All left tires are of equal tire air pressure\n";
                }
                else if (frontLTire != rearLTire)
                {
                    lt = false;
                    cout << "All left tires are not of equal tire air pressure\n";
                }
            }
            else if (i == 6)
            {
                if (frontRTire == rearRTire)
                {
                    rt = true;
                    cout << "All right tires are of equal tire air pressure\n";
                }
                else if (frontRTire != rearRTire)
                {
                    rt = false;
                    cout << "All right tires are not of equal tire air pressure\n";
                }
            }
            else if (i == 7)
            {
                if ((front == true && rear == true) && (lt == true && rt == true))
                {
                    cout << "All tires are of equal tire air pressure\n";
                }
                else if (front == false || rear == false || lt == false || rt == false)
                {
                    cout << "All tires are not of equal tire air pressure\n";
                }
            }

            i++;
        }
    }
}