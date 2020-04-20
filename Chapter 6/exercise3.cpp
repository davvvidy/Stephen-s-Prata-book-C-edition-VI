#include <iostream>
void switchChoice();
void showMenu();
int main()
{
    switchChoice();
    //system("pause");
    return 0;
}
void switchChoice()
{
    char choice;
    showMenu();
    std::cin >> choice;    
    switch(choice)
    {
        case 'p' :  std::cout << "I like to eat grass\n";
                    break;
        case 'q' :  std::cout << "I like to eat meat\n";
                    break;
        case 'r' :  std::cout << "*Flies away*\n";
                    break;
        case 's' :  std::cout << "Woof Woof\n";
                    break;
        default  :  switchChoice();
    }
}
void showMenu()
{
    std::cout << "Choose p,q,r or s: \n";
    std::cout << "p) Herbivorous        q) Carnivorous\n";
    std::cout << "r) Bird               s) Dog \n";
}