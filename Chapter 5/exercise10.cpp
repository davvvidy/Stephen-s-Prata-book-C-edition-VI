#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter number of rows: ";
    int numberOfRows;
    cin >> numberOfRows;
    for(int i = 0; i < numberOfRows; i++)
    {
        int dots = i+1;
        int stars = numberOfRows - dots;
        while (dots<numberOfRows)
        {
            cout << ".";
            dots++;
        }    
        while (stars<numberOfRows)    
        {
            cout << "*";
            stars++;
        }
        cout << endl;
    }
    //system("pause");
    return 0;
}