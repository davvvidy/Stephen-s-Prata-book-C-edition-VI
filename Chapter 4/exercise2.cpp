#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string name;
    string dessert;

    cout << "Write your name:\n";
    getline(cin, name);
    cout << "Write your favourie desser:\n";
    getline(cin, dessert);
    cout << "I have for you " << dessert;
    cout << ", " << name << ".\n";
    //system("pause");
    return 0;
}