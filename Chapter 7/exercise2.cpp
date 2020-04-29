#include <iostream>

const int Max = 10;
int fillGolfScores(double[], int);
void showScores(const double[], int);
double scoreAVG(double[], int);
int main()
{
    using namespace std;
    cout << "Write your golf scores (max 10, everything but the number and score below 0 ends typing )\n";
    double golfScores[Max];
    int size = fillGolfScores(golfScores, Max);
    showScores(golfScores, size);
    cout << endl;
    double average = scoreAVG(golfScores, size);
    cout << "Average of your scores = " <<  average << endl;
    //system("pause");
    return 0;
}
int fillGolfScores(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for(i = 0; i < limit; i++)
    {
        cout << "Write your golf score #" << i+1 << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Wrong data, input aborted.\n";
            break;
        }
        else if(temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}
void showScores(const double ar[], int size)
{
    std::cout << "Scores: ";
    for(int i = 0; i < size; i++)
        std::cout << ar[i] << " ";
}
double scoreAVG(double ar[], int size)
{
    double total = 0;
    for(int i = 0; i < size; i++)
    {
        total += ar[i];
    }
    double average = total/size;
    return average;
}