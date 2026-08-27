#include <iostream>
using namespace std;
#define mpe 0.25
#define we 0.20
#define lab 0.25
#define qz 0.15
#define cp 0.15

class Student
{
public:
    int id, stdCode;
    string lName, fName;
    float mpeScore, wExamScore, labScore, qScore, cPartScore;
};

int main()
{
    Student *s = new Student[1];

    for (int i = 0; i < 3; i++)
    {
        // input
        s[i].id = i + 1;
        cout << "Student " << s[i].id << endl;
        cout << "===============================================================" << endl;
        cout << "Enter student code: ";
        cin >> s[i].stdCode;
        cin.ignore(); // ignore the newline character left in the input buffer
        cout << "Enter student last name:";
        getline(cin, s[i].lName);
        cout << "Enter student first name:";
        getline(cin, s[i].fName);
        cout << "Enter student Machine Problem Exam score: ";
        cin >> s[i].mpeScore;
        cout << "Enter student Written Exam score: ";
        cin >> s[i].wExamScore;
        cout << "Enter student Laboratory score: ";
        cin >> s[i].labScore;
        cout << "Enter student Quiz score: ";
        cin >> s[i].qScore;
        cout << "Enter student Class Participation score: ";
        cin >> s[i].cPartScore;
        cout << "===============================================================" << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        // output each student information

        cout << "Student Grade Report" << endl
             << "===============================================================" << endl
             << "Student " << s[i].id << endl
             << "Student Code: " << s[i].stdCode << endl
             << "Last Name: " << s[i].lName << endl
             << "First Name: " << s[i].fName << endl
             << "Machine Problem Score: " << s[i].mpeScore << endl
             << "Written Exam Score: " << s[i].wExamScore << endl
             << "Laboratory Score: " << s[i].labScore << endl
             << "Quiz Score: " << s[i].qScore << endl
             << "Class Participation Score: " << s[i].cPartScore << endl
             << "Student Course Grade: " << (s[i].mpeScore * mpe + s[i].wExamScore * we + s[i].labScore * lab + s[i].qScore * qz + s[i].cPartScore * cp) << endl;
        if ((s[i].mpeScore * mpe + s[i].wExamScore * we + s[i].labScore * lab + s[i].qScore * qz + s[i].cPartScore * cp) >= 75)
        {
            cout << "Student has passed" << endl;
        }
        else
        {
            cout << "Student needs to enroll" << endl;
        }
        cout << "===============================================================" << endl;
    }

    return 0;
}