#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> grades(10);
    int passed, failed;

    for (int i = 0; i < grades.size(); i++)
    {
        cout << "Enter your grade" << endl;
        cin >> grades[i];
    }
    for (int i = 0; i < grades.size(); i++)
    {

        if (grades[i] <= 100 && grades[i] >= 98)
        {
            cout << "You have an Excellent grade of 1.00" << endl;
            cout << "Remarks: Passed" << endl;
            passed += 1;
        }
        else if (grades[i] <= 97 && grades[i] >= 95)
        {
            cout << "You have an Outstanding grade of 1.25" << endl;
            cout << "Remarks: Passed" << endl;
            passed += 1;
        }
        else if (grades[i] <= 94 && grades[i] >= 92)
        {
            cout << "You have an Very Good grade of 1.50" << endl;
            cout << "Remarks: Passed" << endl;
            passed += 1;
        }
        else if (grades[i] <= 91 && grades[i] >= 89)
        {
            cout << "You have an Very Satisfactory grade of 1.75" << endl;
            cout << "Remarks: Passed" << endl;
            passed += 1;
        }
        else if (grades[i] <= 88 && grades[i] >= 86)
        {
            cout << "You have an Quite Good grade of 2.00" << endl;
            cout << "Remarks: Passed" << endl;
            passed += 1;
        }
        else if (grades[i] <= 85 && grades[i] >= 83)
        {
            cout << "You have an Good  grade of 2.25" << endl;
            cout << "Remarks: Passed" << endl;
            passed += 1;
        }
        else if (grades[i] <= 82 && grades[i] >= 80)
        {
            cout << "You have an Satisfactory grade of 2.50" << endl;
            cout << "Remarks: Passed" << endl;
            passed += 1;
        }
        else if (grades[i] <= 79 && grades[i] >= 77)
        {
            cout << "You have an Moderately Satisfactory grade of 2.75" << endl;
            cout << "Remarks: Passed" << endl;
            passed += 1;
        }
        else if (grades[i] <= 76 && grades[i] >= 75)
        {
            cout << "You have an Passing grade of 3.00" << endl;
            cout << "Remarks: Passed" << endl;
            passed += 1;
        }
        else if (grades[i] < 75)
        {
            cout << "You have an Failure grade of 5.00" << endl;
            cout << "Remarks: Failed" << endl;
            failed += 1;
        }
        else
        {
            cout << "Input cannot be computed";
        }
    }
    cout << "Number of passed is " << passed << endl;
    cout << "Number of failed is " << failed << endl;
}