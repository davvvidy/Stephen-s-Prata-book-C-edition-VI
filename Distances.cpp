#include <iostream>
using namespace std;

int lightYearsToAU(float);

int main()
{
    cout << "Light years: ";
    float lightYears;
    cin >> lightYears;
    float astronomicalUnits = lightYearsToAU(lightYears);
    cout << lightYears << " light years is " << astronomicalUnits << " astronomical units" << endl;
    //system("pause");
    return 0;
}

int lightYearsToAU(float n)
{
    int x = n*63240;
    return x;
}