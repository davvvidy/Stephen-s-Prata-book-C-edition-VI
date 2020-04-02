#include <iostream>

int main()
{
    using namespace std;

    int const secondsToDayDivider = 86400;
    int const secondsToHourDivider = 3600;
    int const secondsToMinuteDivider = 60;

    cout << "Number of seconds: ";
    long long seconds;
    cin >> seconds;

    int days = seconds/secondsToDayDivider;
    int hours = (seconds%secondsToDayDivider)/secondsToHourDivider;
    int minutes = (seconds%secondsToHourDivider)/secondsToMinuteDivider;
    int secondsAfterCalculations = seconds%secondsToMinuteDivider;

    cout << seconds << " seconds is " << days << "days, " << hours << "hours, " << minutes << "minutes and "
        << secondsAfterCalculations << " seconds\n";
    //system("pause");
    return 0;
}