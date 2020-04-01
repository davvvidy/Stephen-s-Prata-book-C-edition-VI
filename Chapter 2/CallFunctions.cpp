#include <iostream>
using namespace std;

void firstText();
void secondText();

int main()
{
    firstText();
    firstText();
    secondText();
    secondText();
    //system("pause");
    return 0;
}

void firstText()
{
    cout << "This is text number one." << endl;
}

void secondText()
{
    cout << "This is text number two." << endl;
}