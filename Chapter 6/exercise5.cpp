#include <iostream>
int ArSize = 4;
int main()
{
    using namespace std;
    cout << "How much did you earn this year?\n";
    double income;
    cin >> income;
    if(income >= 0)
    {
        float taxes[ArSize] = {0, 0.1, 0.15, 0.2};
        int taxThreshold[ArSize] = {5000, 10000, 20000, 35000};
        double taxToPay = 0;
        int i = 0;
        while (income > taxThreshold[i])
        {
            taxToPay = taxToPay + taxThreshold[i] * taxes[i];
            income = income - taxThreshold[i];
            i++;
        }
        taxToPay = taxToPay + income * taxes[i];
        cout << "You have " << taxToPay << " tax to pay.\n";
    }
    //system("pause");
    return 0;
}