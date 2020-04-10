#include <iostream>

struct candyBar
{
    char name[20];
    float weight;
    int calories;
};

int main()
{
    using namespace std;

    candyBar snacks[3] = 
    {
        {"Mocha Munch", 2.3, 350},
        {"Milky Way", 3.3, 200},
        {"Snickers", 5.43, 620}
    };

    cout << "First snack information: " << snacks[0].name << " " << snacks[0].weight << "g " << snacks[0].calories << "kcal\n";
    cout << "Second snack information: " << snacks[1].name << " " << snacks[1].weight << "g " << snacks[1].calories << "kcal\n";
    cout << "Third snack information: " << snacks[2].name << " " << snacks[2].weight << "g " << snacks[2].calories << "kcal\n";
    //system("pause");
    return 0;
}