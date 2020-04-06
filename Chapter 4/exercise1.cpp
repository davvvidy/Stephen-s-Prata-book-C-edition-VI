#include <iostream>

struct student
{
    char name[30];
    char surname[20];
    short grade;
    short age;
};

int main()
{
    using namespace std;
    student user;

    cout << "What's your name? ";
    cin.getline(user.name, 30);
    cout << "What's your surname? ";
    cin >> user.surname;
    cout << "What grade should you get? ";
    cin >> user.grade;
    cout << "How old are you? ";
    cin >> user.age;

    cout << "Name: " << user.surname << ", " << user.name << endl;
    cout << "Grade: " << user.grade-1 << endl;
    cout << "Age: " << user.age << endl;
    //system("pause");
    return 0;
}