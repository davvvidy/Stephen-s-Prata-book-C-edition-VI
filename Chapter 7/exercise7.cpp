#include <iostream>
const int Max = 5;

double * fill_array(double * ar, int limit);
void show_array(const double * ar, double * n);
void revalue(double r, double * ar, double * n);

int main()
{
    using namespace std;
    double properties[Max];

    double * size = fill_array(properties, Max);
    show_array(properties, size);
    if(size > 0)
    {
        cout << "Provide a value change factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while  (cin.get() != '\n')
                continue;
            cout << "Wrong value, type number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Ready.\n";
    cin.get();
    cin.get();
    return 0;
}

double * fill_array(double * ar, int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Write value nr " << (i + 1) << ": ";
        cin >>  temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Wrong data,  typing breaks.\n";
            break;
        }
        else if(temp < 0)
            break;
        *(ar + i) = temp;
    }
    return (ar + i);
}

void show_array(const double * ar, double * n)
{
    using namespace std;
    const double * temp = ar;
    for (int i = 0; temp < n; i++, temp++)
    {
        cout << "Property nr " << (i + 1) << ": ";
        cout << *temp << endl;
    }
}

void revalue(double r, double * ar, double * n)
{
    double * temp = ar;
    for(int i = 0; temp < n; i++, temp++)
        *temp *= r;
}