#include <iostream>

struct pizzaData 
{
    std::string name;
    int diameter;
    int weight;
};

int main()
{
    using namespace std;
    pizzaData * ps = new pizzaData;

    cout << "Enter the diameter of the pizza(cm): ";
    cin >> ps->diameter;
    cin.get();
    cout << "Enter the name of the pizza manufacturer: ";
    getline(cin, ps->name);
    cout << "Enter the weight of the pizza(g): ";
    cin >> (*ps).weight; // I try both methods (with arrow and dot) to get values.

    cout << "Pizza informations: " << ps->name << " " << (*ps).diameter << "cm " << ps->weight << "g\n"; //I try both methods to show values.
    delete ps;
    //system("pause");
    return 0;
}