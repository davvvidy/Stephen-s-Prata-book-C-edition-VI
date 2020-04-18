#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    cout << "Write text to modify. \"@\" ends typing\n";
    char ch;
    cin.get(ch);
    while(ch != '@')
    {
        if(!isdigit(ch))
        {
            if(islower(ch))
            {
                ch = toupper(ch);    
                cout << ch;
            }
            else if(isupper(ch))
            {
                ch = tolower(ch);
                cout << ch;
            }
            else
            {
                cout << ch;
            }
        }
        cin.get(ch);
    }
    //system("pause");
    return 0;
}