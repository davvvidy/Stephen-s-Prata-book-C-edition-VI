#include <iostream>
const int ArSize = 12;
const int years = 3;
const std::string months[ArSize] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int main()
{
    using namespace std;
    int soldBooks[years][ArSize];
    soldBooks[0][0] = 0;
    int annualSales[years] = {0, 0, 0};
    int yearCounter = 0;
    do
    {
        for(int i = 0; i < ArSize; i++)
        {
            cout << "In " << months[i] << " we sold this amount of books: ";
            cin >> soldBooks[yearCounter][i];
            annualSales[yearCounter] = annualSales[yearCounter] + soldBooks[yearCounter][i];
        }
        yearCounter++;
    } while(yearCounter < years);
    cout << "In first year we sold " << annualSales[0] << " books\n";
    cout << "In second year we sold " << annualSales[1] << " books\n";
    cout << "In third year we sold " << annualSales[2] << " books\n";
    int fullSale;
    fullSale = annualSales[0] + annualSales[1] + annualSales[2];
    cout << "Which gives us " << fullSale << " sold books in 3 years\n"; 
    //system("pause");
    return 0;
}