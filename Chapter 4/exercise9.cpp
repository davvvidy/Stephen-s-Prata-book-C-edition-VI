#include <iostream>
#include <cstring>

struct candyBar
{
    char name[20];
    float weight;
    int calories;
};

int main()
{
    using namespace std;

    candyBar * snacks = new candyBar[3];
    strcpy(snacks[0].name, "Mocha Munch");
    snacks[0].weight = 2.3;
    snacks[0].calories = 350;
    strcpy(snacks[1].name, "Milky Way");
    snacks[1].weight = 3.3;
    snacks[1].calories = 200;
    strcpy(snacks[2].name, "Snickers");
    snacks[2].weight = 5.43;
    snacks[2].calories = 620;
    cout << "First snack information: " << snacks[0].name << " " << snacks[0].weight << "g " << snacks[0].calories << "kcal\n";
    cout << "Second snack information: " << snacks[1].name << " " << snacks[1].weight << "g " << snacks[1].calories << "kcal\n";
    cout << "Third snack information: " << snacks[2].name << " " << snacks[2].weight << "g " << snacks[2].calories << "kcal\n";
    delete[] snacks;
    //system("pause");
    return 0;
}