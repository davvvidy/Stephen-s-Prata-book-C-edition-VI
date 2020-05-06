#include <iostream>
using namespace std;
const int ArSize = 10;
int fill_array(double [], int);
void show_array(double [], int);
void reverse_array(double[], int);
int main()
{
    double arr[ArSize];
    int count;
    count = fill_array(arr, ArSize);
    show_array(arr, count);
    reverse_array(arr, count-1);
    cout << "Now let's see reversed array\n";
    show_array(arr, count);
    //system("pause");
    return 0;
}

int fill_array(double name[], int ArSize)
{
    cout << "Enter max " << ArSize << " double values into array.\n\'q\' endss\n#1 value: ";
    int i = 0;
    while(i < ArSize && cin >> name[i])
    {
        if (++i < ArSize)
            cout << "#" << i+1 << " value: ";
    }
    return i;
}
void show_array(double arr[], int ArSize)
{
    for(int i = 0; i < ArSize; i++)
        cout << "Value #" << i+1 << " = " << arr[i] << endl;
}
void reverse_array(double arr[], int ArSize)
{
    int i = 0;
    double temp;
	while(i < ArSize)
	{
		temp = arr[i]; // get arr[0]
		arr[i] = arr[ArSize]; //arr first value =  arr last value... 
		arr[ArSize] = temp; //arr last value = arr  first value...
		i++;
		ArSize--;
	}
}
