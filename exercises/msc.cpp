#include <iostream>
using namespace std;

int main()
{
    float mtSales, mIncome;
    // Initialize Monthly Sales
    cout << "How much are the monthly sales;";
    cin >> mtSales;
    // compute
    if (mtSales >= 50000)
    {
        cout << "Your monthly income is: " << endl;
        cout <<

            (mIncome = 375 + (mtSales * 0.16));
    }
    else if (mtSales < 50000 && mtSales >= 40000)
    {
        cout << "Your monthly income is: " << endl;
        cout << (mIncome = 350 + (mtSales * 0.14));
    }
    else if (mtSales < 40000 && mtSales >= 30000)
    {
        cout << "Your monthly income is: " << endl;
        cout << (mIncome = 325 + (mtSales * 0.12));
    }
    else if (mtSales < 30000 && mtSales >= 20000)
    {
        cout << "Your monthly income is: " << endl;
        cout << (mIncome = 300 + (mtSales * 0.9));
    }
    else if (mtSales < 20000 && mtSales >= 10000)
    {
        cout << "Your monthly income is: " << endl;
        cout << (mIncome = 250 + (mtSales * 0.05));
    }
    else if (mtSales < 10000)
    {
        cout << "Your monthly income is: " << endl;
        cout << (mIncome = 200 + (mtSales * 0.03));
    }
    else
    {
        cout << "Input is not applicable to the conditions stated" << endl;
    }
}