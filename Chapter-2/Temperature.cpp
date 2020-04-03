#include <iostream>
using namespace std;

int celsiusToFahrenheit(int);

int main()
{
    int celsius;
    cout << "Temperature in Celsius: ";
    cin >> celsius;
    int fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << " Celsius degrees is " << fahrenheit << " Fahreheit degrees " << endl;
    //system("pause");
    return 0;
}

int celsiusToFahrenheit(int n)
{
    int x = n*1.8+32;
    return x;
}
