#include <iostream>

using namespace std;

// values
int nofScores = 0;
int y = 0;
int error = 0;
int score, total, sat, unsat, exc;

// Evaluate scores in main method
int main()
{
    cout << "How many scores do you want to evaluate: ";
    cin >> nofScores;
    for (int i = 0; i < nofScores; i++)
    {
        while (nofScores > y && error <= 3)
        {
            cout << "Enter score " << ++y << ": ";
            cin >> score;

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
                total += score;
            }
            else
            {

                cout << "Invalid score! Please enter a score between 0 and 100." << endl
                     << "You have " << 3 - error << " attempts left." << endl;
                --y;
                error++;
            }
        }
        // Break loop if num. of evaluated scores is 0 or less
        if (nofScores <= y)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    // Conditioned only if there are valid scores entered, and score evaluated not equal to 0 or less
    if (nofScores > 0 && error <= 3)
    {

        cout << "Total score: " << total << endl;
        cout << "Total satisfactory scores: " << sat << endl;
        cout << "Total unsatisfactory scores: " << unsat << endl;
        cout << "Total excellent scores: " << exc << endl;
    }
    else
    {
        cout << "No scores to evaluate" << endl;
    }

    return 0;
}