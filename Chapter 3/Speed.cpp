#include <iostream>

float LOnn100kmToMpgConverter(float);

int main()
{
    using namespace std;

    cout << "Average fuel consumption for you car (xL/100km)?" << endl;
    float liters;
    cin >> liters;
    float milesPerGallon = LOnn100kmToMpgConverter(liters);
    cout << liters << "/100km is " << milesPerGallon << "mpg\n";
    system("pause");
    return 0;
}

float LOnn100kmToMpgConverter(float x)
{
    float const gallonsInLiter = 3.875;
    short const kilometers = 100;
    float const milesInKilometer = 0.6214;
    
    float litersToGallons = x/gallonsInLiter;
    float KilometersPerGallon = kilometers/litersToGallons;
    float milesPerGallon = KilometersPerGallon*milesInKilometer;
    return milesPerGallon;
}