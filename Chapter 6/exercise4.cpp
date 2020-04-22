#include <iostream>
const int ArSize = 5;
const int strSize = 30;
struct programmers {
    char name[strSize];
    char position[strSize];
    char alias[strSize];
    int preferences;
};

int main()
{
    using namespace std;
    programmers listOfProgrammers[ArSize] ={ 
        {"Przemek", "Apprentice", "Dy", 1},
        {"Dawid", "Junior Programmer", "Dav", 2},
        {"Arek", "Frontend Developer", "Arbz", 0},
        {"Beatrix", "Backend Developer", "Beta", 0},
        {"Zenon", "Company owner", "Zenix", 2}
    };
    char ch;
    cout << "Our company workers: \n";
    cout << "a)list by name         b)list by position\n";
    cout << "c)list by alias        d)list by pereference\n";
    cout << "q)quit\n";
    cout << "Choose one of the options: ";
    cin >> ch;
    while(ch != 'q')
    {
        if(ch !='a' && ch != 'b' && ch != 'c' && ch != 'd')
        {
            cout << "Please enter a,b,c,d or q: ";
            cin >> ch;
        } else 
        {
            switch(ch)
            {
                case 'a'    :   for(int i = 0; i < ArSize; i++)
                                    cout << listOfProgrammers[i].name << endl;
                                break;
                case 'b'    :   for(int i = 0; i < ArSize; i++)
                                    cout << listOfProgrammers[i].position << endl;
                                break;
                case 'c'    :   for(int i = 0; i < ArSize; i++)
                                    cout << listOfProgrammers[i].alias << endl;
                                break;
                case 'd'    :   for(int i = 0; i < ArSize; i++)
                                {
                                    switch(listOfProgrammers[i].preferences)
                                    {
                                        case 0  :   cout << listOfProgrammers[i].name << endl;
                                                    break;
                                        case 1  :   cout << listOfProgrammers[i].position << endl;
                                                    break;
                                        case 2  :   cout << listOfProgrammers[i].alias << endl;
                                    }
                                }                                      
            }
            cout << "Choose one of the options: ";
            cin >> ch;
        }
    }
    //system("pause");
    return 0;    
}