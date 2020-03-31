#include <iostream>

int main()
{
    //This exercise was kinda unclear what I have to do, maybe because I have polish translation.
    //Program had to ask for tall in cm and convert it into ft and in and seperate answers with "_".
    using namespace std;
    const float foot = 30.48;

    cout << "How tall are you?" << endl;
    int height;
    cin >> height;
    cout << height << "cm is ft_in " << height/foot << "_" << (height/foot)*12 << endl;
    //system("pause");
    return 0;
}