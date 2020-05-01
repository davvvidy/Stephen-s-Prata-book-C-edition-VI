#include <iostream>

long double probability(unsigned numbers,  unsigned picks, unsigned numbers2, unsigned picks2);

int main()
{
    using namespace std;
    double total, choices, powerBallTotal, powerBallChoices;
    cout << "Write biggest number, that can be chosen and the number of deletions:\n";
    while((cin >> total >> choices >> powerBallTotal >> powerBallChoices) && choices <= total && powerBallChoices <= powerBallTotal)
    {
        cout << "The chance of winning is one to ";
        cout << probability(total, choices, powerBallTotal, powerBallChoices);
        cout << endl;
        cout << "Next numbers (q to end): ";
    }
    cout << "Bye!\n";
    //system("pause");
    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned numbers2, unsigned picks2)
{
    long double probability1 = 1.0;
    long double n;
    unsigned p;

    for(n = numbers, p = picks; p > 0; n--, p--)
        probability1 = probability1 * n / p;
    
    long double probability2 = 1.0;
    for(n = numbers2, p = picks2; p > 0; n--, p--)
        probability2 = probability2 * n / p;
    long double result = probability1*probability2;
    return result;
}