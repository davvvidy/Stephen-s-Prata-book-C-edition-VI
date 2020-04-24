#include <iostream>
struct donator {
    char surname[30];
    double moneyDonated;
};
int numberOfSuperDonators(bool[], int);
int main()
{
    using namespace std;
    cout  << "How many donators do you want to enter?";
    int donatorsNumber;
    cin >> donatorsNumber;
    donator * donators = new donator[donatorsNumber];
    bool isSuperDonator[donatorsNumber];
    for(int i = 0; i < donatorsNumber; i++)
    {
        cout << "Donator #" << i+1 << endl;
        cout << "Write surname of donator: ";
        cin.get();
        cin.getline(donators[i].surname, 30);
        cout << "Money donated: ";
        cin >> donators[i].moneyDonated;
        if(donators[i].moneyDonated > 10000)
        {
            isSuperDonator[i] = 1;
        }
        else 
        {
            isSuperDonator[i] = 0;
        }
    }
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