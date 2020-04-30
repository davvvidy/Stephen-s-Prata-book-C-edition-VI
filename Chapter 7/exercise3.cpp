#include <iostream>

struct box{
    char producer[40];
    float height;
    float width;
    float length;
    float volume;
};
void boxVolumes(box * px);
void showBoxData(const box);
int main()
{
    using namespace std;
    cout << "Box was made by: ";
    box userBox;
    cin.get(userBox.producer, 40);
    cout << "Box height: ";
    cin >> userBox.height;
    cout << "Box width: ";
    cin >> userBox.width;
    cout << "Box length: ";
    cin >> userBox.length;
    boxVolumes(&userBox);
    showBoxData(userBox);
    //system("pause");
    return 0;
}

void showBoxData(const box x)
{
    std::cout << "Box was made by: " << x.producer << std::endl;
    std::cout << "Box dimensions: " << x.height << "x" << x.length << "x" << x.width << std::endl;
    std::cout << "Box volumes = " << x.volume << std::endl;
}

void boxVolumes(box * px)
{
    px->volume = px->height * px->length * px->width;
}