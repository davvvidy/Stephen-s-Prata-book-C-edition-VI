#include <iostream>

int main()
{
    using namespace std;

    int firstNumber;
    int secondNumber;
    cout << "Write two numbers, first is: "; //First must be smaller than second one
    cin >> firstNumber;
    cout << "Second number: ";
    cin >> secondNumber;

    int sumOfNumbers = 0;
    int nextNumberToAdd;
    nextNumberToAdd = firstNumber;

    for(int i = firstNumber; i<=secondNumber; i++)
        sumOfNumbers = sumOfNumbers + nextNumberToAdd++;

    cout << "The sum of the range of numbers between " << firstNumber << " and " << secondNumber << " is " << sumOfNumbers << endl;
    //system("pause");
    return 0;
}