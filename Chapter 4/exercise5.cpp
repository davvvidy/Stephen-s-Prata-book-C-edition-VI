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

    candyBar snack = 
    {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "Snack information: " << snack.name << " " << snack.weight << " " << snack.calories << endl;;
    //system("pause");
    return 0;
}