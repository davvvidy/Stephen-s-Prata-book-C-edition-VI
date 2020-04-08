#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char name[20];
    char surname[20];

    cout << "What's your name? ";
    cin >> name;
    cout << "What's your surname? ";
    cin >> surname;

    strcat(surname, ", ");
    strcat(surname, name);

    cout << "Your name as one inscription: " << surname << endl;
    //system("pause");
    return 0; 
}