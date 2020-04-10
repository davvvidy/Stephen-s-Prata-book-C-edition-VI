#include <iostream>
#include <array>

float averageTimeCounter(float, float, float);

int main()
{
    using namespace std;
    array<float, 3> sprintTime;
    
    cout << "Write your first time in seconds on 100m: ";
    cin >>  sprintTime[0];
    cout << "Write your second time in seconds on 100m: ";
    cin >>  sprintTime[1];
    cout << "Write your third time in seconds on 100m: ";
    cin >>  sprintTime[2];
    float averageTime = averageTimeCounter(sprintTime[0], sprintTime[1], sprintTime[2]);
    cout << averageTime << " seconds, this is your average time on 100m\n";
    //system("pause");
    return 0;
}

float averageTimeCounter(float x, float y, float z)
{
    float a = (x+y+z)/3;
    return a;
}