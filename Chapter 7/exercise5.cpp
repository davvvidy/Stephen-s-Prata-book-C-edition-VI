#include <iostream>

unsigned long int countFactorial(unsigned int);

int main()
{
    using namespace std;

    cout << "Factorial with ";
    unsigned int number;
    while(cin >> number)
    {
        if(number > 1)
        {
            unsigned int factorial = countFactorial(number);
            cout << number << "! = " << factorial << endl; 
        }
        else if (number == 0 || number == 1)
        {
            cout << number << "! = 1\n";
        }
        cout << "Factorial with ";
    }
    //system("pause");
    return 0;
}

unsigned long int countFactorial(unsigned int x)
{
    if(x > 1)
    {
        return x * countFactorial(x-1);
    }
}