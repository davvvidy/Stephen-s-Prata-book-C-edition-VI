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
    pizzaData pizza;

    cout << "Enter the name of the pizza manufacturer: ";
    getline(cin, pizza.name);
    cout << "Enter the diameter of the pizza(cm): ";
    cin >> pizza.diameter;
    cout << "Enter the weight of the pizza(g): ";
    cin >> pizza.weight;

    cout << "Pizza informations: " << pizza.name << " " << pizza.diameter << "cm " <<  pizza.weight << "g\n";
    system("pause");
    return 0;
}