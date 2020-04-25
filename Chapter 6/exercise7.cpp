#include <iostream>
#include <cctype>
#include<string>
int main()
{
    using namespace std;
    cout << "Write the text for analysiss. Single \"q\" ends.\n";
    string word;
    int countWordForVowel = 0;
    int countWordForConsonant = 0;
    int countOthers = 0;
    cin >> word;
    while(word != "q")
    {
        if(isalpha(word[0]))
            if(word[0] == 'a' || word[0] == 'A' || word[0] == 'e' || word[0] == 'E' || word[0] == 'i' || word[0] == 'I' ||
            word[0] == 'o' || word[0] == 'O' || word[0] == 'u' || word[0] == 'U' || word[0] == 'y' || word[0] == 'Y')
                countWordForVowel++;
            else
                countWordForConsonant++;
        else
        countOthers++;

        cin >> word;
    }

    cout << "In this text " << countWordForVowel << " words starts with vowel.\n"; 
    cout << countWordForConsonant << " words starts with consonant.\n"; 
    cout << countOthers << " words starts with other sign.\n";

    //system("pause");
    return 0;
}