#include <iostream>
const int ArSize = 12;
const std::string months[ArSize] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int main()
{
    using namespace std;
    int soldBooks[ArSize];
    soldBooks[0] = 0;
    int annualSales = 0;
    for(int i = 0; i < ArSize; i++)
    {
        cout << "In " << months[i] << " we sold this amount of books: ";
        cin >> soldBooks[i];
        annualSales = annualSales + soldBooks[i];
    }
    cout << "In this year we sold " << annualSales << " books\n";
    //system("pause");
    return 0;
}