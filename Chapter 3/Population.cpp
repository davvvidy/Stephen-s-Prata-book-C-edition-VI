#include <iostream>

int main()
{
    using namespace std;
    
    short const percent = 100;

    cout << "Enter the population of world: ";
    long long worldPopulation;
    cin >> worldPopulation;
    cout << "Enter the population of your country: ";
    long long countryPopulation;
    cin >> countryPopulation;
    float countryToWorldPopulation = float(countryPopulation)/float(worldPopulation)*percent;
    cout << "Your country is " << countryToWorldPopulation << "% of the world population\n";
    //system("pause");
    return 0;
}
