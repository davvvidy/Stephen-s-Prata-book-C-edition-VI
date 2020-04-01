#include <iostream>

int tallToInches(int, int);
float inchesToMeters(int);
float poundsToKilograms(int);
float BMICounter(float, float);

int main()
{
    using namespace std;

    cout << "How tall are you (feet and inches)?\n";
    int feet;
    int inches;
    cin >> feet;
    cin >> inches;
    int height = tallToInches(feet, inches);
    float meters = inchesToMeters(height);

    cout << "How much do you weight (in pounds)?\n";
    int pounds;
    cin >> pounds;
    float kilograms = poundsToKilograms(pounds);

    float BMI = BMICounter(kilograms, meters);
    cout << "Yours BMI is: " << BMI << endl;
    //system("pause");
    return 0;
}

int tallToInches (int x, int y)
{
    int const inchesInFoot = 12;
    int in = x*inchesInFoot+y;
    return in;
}

float inchesToMeters(int x)
{   
    float const metersInInche = 0.0254;
    float y = x*metersInInche;
    return y;
}

float poundsToKilograms(int x)
{
    float const dividerLbsToKG = 2.2;
    float y = x/dividerLbsToKG;
    return y;
}

float BMICounter(float x, float y)
{
    float z = x/(y*y);
    return z;
}