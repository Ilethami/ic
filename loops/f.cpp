#include <iostream>

using namespace std;

// values
int x = 0;
int y = 0;

int score, total, sat, unsat, exc;
// Evaluate scores
int evalScore()
{
    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
        {
            cout << "Score is excellent!" << endl;
            exc++;
        }
        else if (score >= 60)
        {
            cout << "Score is satisfactory!" << endl;
            sat++;
        }
        else if (score < 60)
        {
            cout << "Score is unsatisfactory!" << endl;
            unsat++;
        }
    }
    else
    {
        cout << "Score is cannot be less than 0 or more than 100" << endl;
    }
    return score;
}
//  Main method
int main()
{
    cout << "How many scores do you want to evaluate: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        while (y < x)
        {
            cout << "Enter score " << y++ << ": ";
            cin >> score;
            evalScore();
            total += score;
        }
    }
    cout << "Total score: " << total << endl;
    cout << "Total satisfactory scores: " << sat << endl;
    cout << "Total unsatisfactory scores: " << unsat << endl;
    cout << "Total excellent scores: " << exc << endl;

    return 0;
}