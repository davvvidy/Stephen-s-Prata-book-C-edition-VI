#include <iostream>
int main()
{
    using namespace std;
    int number;
    int sumOfNumbers = 0;
    
    cout << "Write numbers to sum them, 0 ends: \n";
    cin >> number;
    while (number != 0)
    {
        sumOfNumbers = sumOfNumbers + number;
        cin >> number;
    }
    cout << "Sum equals: " << sumOfNumbers << endl;
    //system("pause");
    return 0;
}