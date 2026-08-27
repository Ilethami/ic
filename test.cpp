#include <iostream>
using namespace std;

int main()
{
    float grade;
    cout << "Enter your grade: ";
    cin >> grade;
    {
        if (grade >= 75)
        {
            cout << "Student passed the subject" << endl;
        }
        else
        {
            cout << "Student need to enroll" << endl;
        }
    }
    return 0;
}