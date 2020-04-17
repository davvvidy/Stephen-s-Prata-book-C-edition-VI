#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char word[30];
    int wordCounter = 0;
    char endOfTyping[] = "ready";
    cout << "Write words, when you finish write \"ready\"\n";
    while(strcmp(word, endOfTyping))
    {
        cin >> word;
        wordCounter++;
    }
    cout << "You wrote " << wordCounter - 1 << " words\n"; // -1 to remove ready from counting.
    //system("pause");
    return 0;
}