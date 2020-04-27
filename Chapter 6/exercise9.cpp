#include <iostream>
#include <fstream>
const int SIZE = 60;
struct donator {
    char surname[30];
    double moneyDonated;
};
int numberOfSuperDonators(bool[], int);
int main()
{
    using namespace std;

    char fileName[SIZE];
    ifstream inFile;

    cout  << "Write name of donators file: ";
    cin.getline(fileName, SIZE);
    inFile.open(fileName);
    if (!inFile.is_open())
    {
        cout << "Opening file: " << fileName << " failed.";
        cout << "Program will shut down.";
        exit(EXIT_FAILURE);
    }
    int donatorsNumber;
    inFile >> donatorsNumber;
    inFile.get();
    donator * donators = new donator[donatorsNumber];
    bool isSuperDonator[donatorsNumber];

    for(int i = 0; i < donatorsNumber; i++)
    {
        inFile.getline(donators[i].surname, 30);
        inFile >> donators[i].moneyDonated;
        inFile.get();
            if(donators[i].moneyDonated > 10000)
                isSuperDonator[i] = 1;
            else 
                isSuperDonator[i] = 0;
    }
    
    inFile.close();
    int checkIfNotEmpty;
    checkIfNotEmpty = numberOfSuperDonators(isSuperDonator, donatorsNumber);
    cout << "Our special donators: \n";
    if(checkIfNotEmpty > 0)
    {
        for(int i = 0; i < donatorsNumber; i++)
        {
            if(isSuperDonator[i] == 1)
            {
                cout << donators[i].surname << " donated " << donators[i].moneyDonated << endl;
            }
        }
    } else cout << "Empty.\n";
    cout << "Our donators: \n";
    if(checkIfNotEmpty < donatorsNumber)
    {
        for(int i = 0; i < donatorsNumber; i++)
            if(isSuperDonator[i] == 0)
                cout << donators[i].surname << endl;
    } else cout << "Empty\n";
    delete[] donators;
    //system("pause");
    return 0;
}


int numberOfSuperDonators(bool arr[], int size)
{   
    int z = 0;
    for(int i = 0; i < size; i++)
        z = z + arr[i];
    return z;
}