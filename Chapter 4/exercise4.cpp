#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    string name;
    string surname;

    cout << "What's your name? ";
    cin >> name;
    cout << "What's your surname? ";
    cin >> surname;

    surname += ", ";
    surname += name;
    cout << "Your name as one inscription: " << surname << endl;
    //system("pause");
    return 0; 
}