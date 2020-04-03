#include <iostream>
using namespace std;

void showTime(int, int);

int main()
{
    int hours;
    int minutes;    
    cout << "Number of hours: ";
    cin >> hours;
    cout << "Number of minutes: ";
    cin >> minutes;
    showTime(hours, minutes);
    //system("pause");
    return 0;
}

void showTime(int x, int y)
{
    cout << "Time: " << x << ":" << y << endl;
}
