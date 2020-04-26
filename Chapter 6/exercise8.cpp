#include <iostream>
#include <fstream>
const int SIZE = 60;
int main()
{
    using namespace std;

    char fileName[SIZE];
    char ch;
    int countSigns = 0;
    ifstream inFile;

    cout << "Write name of file: ";
    cin.getline(fileName, SIZE);
    inFile.open(fileName);
    if (!inFile.is_open())
    {
        cout << "Opening file: " << fileName << " failed.";
        cout << "Program will shut down.";
        exit(EXIT_FAILURE);
    }
    while(inFile.get(ch))
    {
        if(ch == EOF)
        {
            break;
        }
        countSigns++;
    }
    inFile.close();
    cout << countSigns << endl;
    //system("pause");
    return 0;
}