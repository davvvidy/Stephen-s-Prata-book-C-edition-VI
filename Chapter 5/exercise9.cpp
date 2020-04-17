#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word;
    int wordCounter = 0;
    string endOfTyping = "ready";
    cout << "Write words, when you finish write \"ready\"\n";
    while(word != endOfTyping)
    {
        cin >> word;
        wordCounter++;
    }
    cout << "You wrote " << wordCounter - 1 << " words\n"; // -1 to remove ready from counting.
    //system("pause");
    return 0;
}