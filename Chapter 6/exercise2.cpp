#include <iostream>
#include <array>
const int ArSize = 10;
int main()
{
    using namespace std;
    array<double, ArSize> donations = {0,0,0,0,0,0,0,0,0,0};
    cout << "Please enter amount of donations.\n";
    cout << "Max number of donations is " << ArSize << ". Anything else from the number ends.n\n";
    cout << "#1 donation: ";
    int i = 0;
    while(i < ArSize && cin >> donations[i])
    {
        if (++i < ArSize)
            cout << "#" << i+1 << " donation: ";
    }
    double total = 0;
    int numberOfDonations = 0;
    while(donations[numberOfDonations] != 0 && numberOfDonations < ArSize)
    {
        total += donations[numberOfDonations];
        numberOfDonations++;
    }
    double average = 0; 
    average = total/(numberOfDonations);
    cout << "Total amount of donations is " << total << " and average is " << average << endl;
    cout << "Donations above average: ";
    int j = 0;
    while(j < numberOfDonations)
    {
        if(donations[j] > average)
            cout << donations[j] << " ";
        j++;
    }
    cout << endl;
    //system("pause");
    return 0;
}