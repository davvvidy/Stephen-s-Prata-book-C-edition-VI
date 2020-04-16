#include <iostream>
struct car
{
    char name[30];
    int year;
};

int main()
{
    using namespace std;
    int carsNumber;
    cout << "How many cars do you want to enter? ";
    cin >> carsNumber;
    car * cars = new car[carsNumber];
    cars[0] = {0,0};
    for(int i = 0; i < carsNumber; i++)
    {
        cout << "Car #" << i+1 << endl;
        cout << "Write name of car: ";
        cin.get();
        cin.getline(cars[i].name, 30);
        cout << "Year of production: ";
        cin >> cars[i].year;
    }
    for (int i = 0; i < carsNumber; i++)
    {
        cout << cars[i].name << " was made in " << cars[i].year << endl;
    }
    delete[] cars;
    //system("pause");
    return 0;
}