#include <iostream>

float degreesCalculator(unsigned short, unsigned short, unsigned short);

int main()
{
    using namespace std;

    cout << "Write longitude in degrees, minutes and seconds. \n First write degrees: ";
    unsigned short degrees;
    cin >> degrees;

    cout << "Now write minutes: ";
    unsigned short minutes;
    cin >> minutes;

    cout << "Now write seconds: ";
    unsigned short seconds;
    cin >> seconds;

    float degreesResult = degreesCalculator(degrees, minutes, seconds);
    cout << degrees << " degrees, " << minutes << " minutes and " << seconds << " seconds = " << degreesResult << " degrees \n";
    //system("pause");
    return 0;
}

float degreesCalculator(unsigned short x, unsigned short y, unsigned short z)
{
    const short secondsInDegree = 3600;
    const short minutesInDegree = 60;

    float a = x + float(y)/minutesInDegree + float(z)/secondsInDegree;
    return a;
}