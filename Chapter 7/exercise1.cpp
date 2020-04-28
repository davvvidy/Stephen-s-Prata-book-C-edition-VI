#include <iostream>

double countHarmonicMean(double, double);
int main()
{
    using namespace std;
    cout << "Write two numbers to count harmonic mean. 0 ends the program \n";
    double x;
    double y;
    while(cin >> x >> y && x != 0 && y != 0)
    {
        cout << "Harmonic mean of " << x << " and " << y << " equals " << countHarmonicMean(x,y) << endl;
        cout <<  "Write another two numbers: \n";
    }
    //system("pause");
    return 0;
}

double countHarmonicMean(double x, double y)
{
    double z = 0;
    z = 2.0*x*y/(x+y);
    return z;
}